#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include <FreeRTOS.h>
#include <queue.h>
#include <task.h>

unsigned char new_speed;
char new_sec = 0;
int new_temp;
char RxBuffer[2];
short RxBuffer_g;

unsigned int min = 0;
unsigned int sec = 0;
char Time_Block = 1;

int current_screen = 9487;

extern "C"
{
	xQueueHandle msg_speed;
	xQueueHandle msg_temp1;
	xQueueHandle msg_temp2;
	xQueueHandle msg_temp3;
	xQueueHandle msg_temp4;
	xQueueHandle msg_temp_c;
	xQueueHandle msg_temp_m;
	xQueueHandle msg_bp;
	xQueueHandle msg_general; // experimental

	xQueueHandle msg_sec;
	xQueueHandle msg_butt;
}

Model::Model() : modelListener(0)
{
    msg_speed = xQueueGenericCreate(1, 4, 0);
	msg_temp1 = xQueueGenericCreate(1, 1, 0);
	msg_temp2 = xQueueGenericCreate(1, 1, 0);
	msg_temp3 = xQueueGenericCreate(1, 1, 0);
	msg_temp4 = xQueueGenericCreate(1, 1, 0);
	msg_temp_c = xQueueGenericCreate(1, 1, 0);
	msg_temp_m = xQueueGenericCreate(1, 1, 0);
	msg_bp = xQueueGenericCreate(1, 1, 0);

	msg_sec = xQueueGenericCreate(1, 1, 0);
	msg_butt = xQueueGenericCreate(1, 1, 0);
	msg_general = xQueueGenericCreate(1, 2, 0);
}

void Model::GetCurrentScreen(int CS)
{
	//for screen presenter just start
	current_screen = CS; //CS=1 for EngineerPage, 0 for DriverPage
	if(CS == 0){
		modelListener->setNewTime(min, sec);
	}
}

void Model::tick()
{
    //
	if (xQueueReceive(msg_speed, &new_speed, 0) == pdTRUE && current_screen == 0){
		modelListener->setNewSpeed(new_speed);
	}
	if (xQueueReceive(msg_temp1, &new_temp, 0) == pdTRUE){
		modelListener->setNewTemp1(new_temp);
	}
	if (xQueueReceive(msg_temp2, &new_temp, 0) == pdTRUE){
		modelListener->setNewTemp2(new_temp);
	}
	if (xQueueReceive(msg_temp3, &new_temp, 0) == pdTRUE){
		modelListener->setNewTemp3(new_temp);
	}
	if (xQueueReceive(msg_temp4, &new_temp, 0) == pdTRUE){
		modelListener->setNewTemp4(new_temp);
	}
	if (xQueueReceive(msg_temp_c, &new_temp, 0) == pdTRUE){
		modelListener->setNewTempC(new_temp);
	}
	if (xQueueReceive(msg_temp_m, &new_temp, 0) == pdTRUE){
		modelListener->setNewTempM(new_temp);
	}
	if (xQueueReceive(msg_bp, &new_speed, 0) == pdTRUE){
		modelListener->setNewBp(new_speed);
	}
	if (xQueueReceive(msg_butt, &new_sec, 0) == pdTRUE){
		modelListener->butt_0();
	}	
	if (xQueueReceive(msg_general, &RxBuffer_g, 0) == pdTRUE){
		RxBuffer[0] = *((char*)&RxBuffer_g + 1);
		RxBuffer[1] = *((char*)&RxBuffer_g);
		switch(RxBuffer[0])
		{
		case 'a':
			modelListener->setNewAp(RxBuffer[1]);
			break;
		default:
			break;
		}

	}
	//


	if (xQueueReceive(msg_sec, &new_sec, 0) == pdTRUE  && !Time_Block)
	{
		Time_sec_add();
		modelListener->setNewTime(min, sec);
	}
}














void Model::Time_sec_add(){
	if (sec < 60)	{
		sec++;
	}
	else	{
		Time_min_add();
		sec = 0;
	}
}

void Model::Time_min_add(){
	min++;
}

void Model::Time_RS()
{
	if(Time_Block){
		min = 0;
		sec = 0;
		modelListener->setNewTime(min, sec);
	}else{
		//virtual message queue sent data
	}
}

void Model::Time_SS()
{
	Time_Block = Time_Block ? 0 : 1;
}
