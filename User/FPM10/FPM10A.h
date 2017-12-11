#ifndef _FPM10A_H
#define _FPM10A_H


#include "stm32f10x.h"


void FINGERPRINT_duibi(void);

//volatile unsigned char FINGER_NUM;
//���ָ��ģ��¼��ָ�����������00��ʾ¼��ɹ���02����ָ��03¼��ʧ��
unsigned char test_fig(void);

//FINGERPRINT_���ָ��ͼ������
void FINGERPRINT_Cmd_Get_Img(void);

//��ͼ��ת��������������Buffer1��
void FINGERPRINT_Cmd_Img_To_Buffer1(void);

//��ͼ��ת��������������Buffer2��
void FINGERPRINT_Cmd_Img_To_Buffer2(void);

//��BUFFER1 �� BUFFER2 �е�������ϲ���ָ��ģ��
void FINGERPRINT_Cmd_Reg_Model(void);

//ɾ��ָ��ģ���������ָ��ģ��
void FINGERPRINT_Cmd_Delete_All_Model(void);

//ɾ��ָ��ģ�����ָ��ָ��ģ��
void FINGERPRINT_Cmd_Delete_Model(unsigned int uiID_temp);
	
//���ָ��ģ������
void FINGERPRINT_Cmd_Get_Templete_Num(void);

//����ȫ���û�999ö
void FINGERPRINT_Cmd_Search_Finger(void);

//����ȫ���û�999ö
void FINGERPRINT_Cmd_Search_Finger_Admin(void);

void FINGERPRINT_Cmd_Save_Finger( unsigned char ucH_Char,unsigned char ucL_Char );

//���շ������ݻ���
void FINGERPRINT_Recevice_Data(unsigned char ucLength);

//ָ���������û�
unsigned char FP_add_new_user(unsigned char ucH_user,unsigned char ucL_user);

#endif		
