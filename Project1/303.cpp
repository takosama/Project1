#include<stdio.h>
void p303(void)
{
	int a = 0;
	int b = 0;
	int x = 0;
	printf("a�̒l��%d b�̒l��%d x�̒l��%d�ł�\n", a, b, x);

	a = 35;
	b = 99;
	printf("a��b�ɐV�����l�������܂���\n a�̒l��%d b�̒l��%d x�̒l��%d�ł�\n", a, b, x);
	
	printf("����a��b�����ւ������Ǝv���܂�\n");
	printf("������a=b:b=a�Ƃ��Ă݂܂���");
	a = b;
	b = a;
	printf("�������Ȃ��炻�̌��ʂ�a�̒l��%d b�̒l��%d �ƂȂ肤�܂��s���܂���\n", a, b);
	printf("�ϐ��̒l�����Ƃɖ߂��܂�");

	a = 35;
	b = 99;
	printf("a�̒l��%d b�̒l��%d x�̒l��%d�ł�\n", a, b, x);

	printf("������a��b�����ւ��邽�߂�x=a;a=b;b=x�Ƃ��Ă݂܂���\n");
	x = a;
	a = b;
	b = x;
	printf("���������a�̒l��%d b�̒l��%d �ƂȂ�l�������Ƃ������񂳂�܂���\n", a, b);
	printf("���Ȃ݂ɂ��̎���x�̒l��%d�ł�\n", x);
	printf("�Ȃ������Ȃ�̂��͑�����Z�q�𗝉����邱�Ƃ���b�ɂȂ�܂�\n");
	printf("�C�}�C�`���������Đl�́@�K���ł���悤�ɂ���΂��Ă�������\n");
	printf("���ꂪ�v���O���~���O�w�K�̕����ꓹ�Ȃ̂ł�\n");
}