#include <stdio.h>
#include <math.h>    
#include <stdlib.h> // clrscr�Լ�
#include <conio.h>// getch�Լ�
#include <errno.h>
//----------------------------------
extern void clrscr(); //ȭ�� Ŭ����
void Title();  //���α׷� �Ұ�  
void Run();  //����                
   int SelectMenu();//��ü �޴�       
//----------------------------------

//-----------------------------------
void Cul16();//16���� ����---------------
void HexSum(int x, int y);// 16���� ����
void HexMinus(int x, int y);// 16���� ����
void HexMul(int x, int y);// 16���� ����
void HexDiv(int x, int y);// 16���� ������
//----------------------------------------
void Cul8();//8���� ����-----------------
void OctSum(int x, int y);//8���� ����
void OctMinus(int x, int y);//8��������
void OctMul(int x, int y);//8���� ����
void OctDiv(int x, int y);//8���� ������
//----------------------------------------

//���� ���� -----------------------------
void Sub(double x,double y);//���� 
void Sum(double x,double y);//���ϱ� 
void Div(double x,double y);//������ 
void Mul(double x,double y);//����
//---------------------------------------

void General();//�Ϲݿ� ����-----------
int SelectGeneral();//�Ϲݿ� ���� �޴�

void GeneralTwo();//�Ϲݿ� ���ڸ�
void Per(double x,double y);//�����

void GeneralOne();//�Ϲݿ� ���ڸ�
double Sqrt1(double x);//������
double X1(double x);// 1/x;
//---------------------------------------

void Engineering(); //���п� ����-------------------
int SelectEngineering(); // ���п� ���� �޴� 

void EngineeringTwo();//���п���ڸ�
void Exp(double x,double y);//Exp
void square(double x, double y);//a^b
void And(double x, double y);//And
void Mod(double x, double y);//Mod
void Or(double x, double y);//Or
void Xor(double x, double y);//Xor
void LSHleft(double x, double y);//LSHleft
void pita(double x, double y);//��Ÿ��� 

void EngineeringOwn();//���п����ڸ�
double fact(double x);//���丮�� 
void Tan1(double x);//ź��Ʈ
double Sin1(double x);//����
double Cos1(double x);//�ڽ���
double Fabs(double x);//���밪 
void G1(double x);//������ 
void ln(double x);//ln
void Log(double x);//log
void pi(double x); //PI
void square2(double x);//a^2
void square3(double x);//a^3
void INT(double x); // INT
void Hex(double x); // Hex
void Oct(double x); // Oct
void Binary(double x);//Binary
void dump(double x);// �Ҽ��ڸ� �������Լ� 
void as(double x);//Accos
void ac(double x);
void at(double x);
void sh(double x);
void ch(double x);
void th(double x);
//-------------------------------------------------




void main()
{
	Title();
	Run();
}


void Title()//���α׷� �Ұ�
{
	clrscr();
	printf("      @@@@@@@      2��        @@@@@@@@@@@@\n");
	printf("      @      ���� ���α׷� �Դϴ�      @\n");
	printf("      @                                  @\n");
	printf("      @    [1]  �Ϲݿ� ����            @\n");
	printf("      @    [2]  ���п� ����            @\n");
	printf("      @    [0]   ��       ��             @\n");
	printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t\t[   ]\b\b\b");
	
	
}


void Run()//���� 
{
	int key=0;
	
	while((key = SelectMenu())!= 0)
	{
		
		switch(key)
		{
		case 1 : General();break;
		case 2 : Engineering();break;
		default : break;
		}
		printf("�ƹ�Ű�� ��������\n");
		getch();
	}
	

	
}



int SelectMenu() // �޴�����
{
	int key=0;
	clrscr();
	Title();

	scanf("%d", &key);

	while(key != 0)
	{

	
	if(key ==1) return 1;
	else if(key == 2) return 2;
	else { printf("�߸� �Է��ϼ̽��ϴ�\n");return 12;}

	}
	return 0;
	
}




void General()//�Ϲݿ� ����
{

	int key = 0;
	clrscr();
	
	
	while((key = SelectGeneral())!= 0)
	{
		
		switch(key)
		{
		case 1 : GeneralOne();break;
		case 2 : GeneralTwo();break;
		default : break;
		}
		printf("�ƹ�Ű�� ��������\n");
		getch();
	}
}

int SelectGeneral()//�Ϲݿ� ���� �޴�
{
	int key=0;
	clrscr();
	printf("@@@@@@@�Ϲݿ� ���� �Դϴ�@@@@@@@\n");
	printf("@   [1]  �ϳ��Ǽ� ����         @\n");
	printf("@   [2]  �ΰ��Ǽ� ����         @\n");
	printf("@   [0]   ��      ��             @\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t[   ]\b\b\b");
	scanf("%d", &key);
	
	while(key != 0)
	{
		
		
		if(key ==1) return 1;
		else if(key == 2) return 2;
		else { printf("�߸� �Է��ϼ̽��ϴ�\n");return 12;}
		
	}
	return 0;
}


void GeneralTwo()// �Ϲݿ� ���ڸ� ����
{
	double a,c ;
	int b;
	clrscr();
	printf("[�Ϲݿ�]�ΰ��Ǽ� ���� �Դϴ�\n\n");
	printf("[1] - [2] + [3] / [4] * [5] %% \n\n");
	printf("ù��° ���� �Է��ϼ���\n");
	scanf("%lf",&a);
	printf("������ �Է��ϼ���\n");
	scanf("%d",&b);
	printf("�ι�°° ���� �Է��ϼ���\n");
	scanf("%lf",&c);
	

	switch(b)
	{
		case 1 : Sub(a,c); break; //����  
		case 2 : Sum(a,c); break; //���ϱ� 
		case 3 : Div(a,c); break; //������ 
		case 4 : Mul(a,c); break; //���� 
		case 5 : Per(a,c); break; //�����
		default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}
	
	
}

void GeneralOne()// �Ϲݿ� ���ڸ� ����
{
	double a ;
	int b;
	clrscr();
	printf("[�Ϲݿ�] �ϳ��Ǽ� ���� �Դϴ�\n\n");
	printf("[1] Sprt [2] 1/x  \n\n");
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%lf",&a);
	printf("������ �Է��ϼ���\n");
	scanf("%d",&b);
	
	switch(b)
	{
	case 1 : Sqrt1(a);break; //������ 
	case 2 : X1(a);break;//�м��� 
	default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}
}






void Engineering()//���п� ����
{
	int key = 0;
	clrscr();


	while((key = SelectEngineering())!= 0)
	{
		
		switch(key)
		{
		case 1 : EngineeringOwn();break;
		case 2 : EngineeringTwo();break;
		case 3 : Cul16();break;
		case 4 : Cul8();break;
		default : break;
		}
		printf("�ƹ�Ű�� ��������\n");
		getch();
	}

}


int SelectEngineering()//���п� �޴�
{
	int key=0;
	clrscr();
	printf("@@@@@@@���п� ���� �Դϴ�@@@@@@@\n");
	printf("@   [1]  �ϳ��Ǽ� ����         @\n");
	printf("@   [2]  �ΰ��Ǽ� ����         @\n");
	printf("@   [3]  16���� ����           @\n");
	printf("@   [4]   8���� ����           @\n");
	printf("@   [0]   ��      ��             @\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t[   ]\b\b\b");
	scanf("%d", &key);
	
	while(key != 0)
	{
		
		
		if(key ==1) return 1;
		else if(key == 2) return 2;
		else if(key == 3) return 3;
		else if(key == 4) return 4;
		else { printf("�߸� �Է��ϼ̽��ϴ�\n");return 12;}
		
	}
	return 0;
	
}





void EngineeringOwn()//���п� ���ڸ� ����
{
	double a ;
	int b;
	clrscr();
	printf("[���п�] �ϳ��Ǽ� ���� �Դϴ�\n\n");
	printf("[1] tan       [2] sin       [3] cos    [4] ���밪  [5] ������ \n");
	printf("[6] n!        [7] ln        [8] log    [9] PI      [10] a^2   \n");
	printf("[11] a^3      [12] INT      [13] Hex   [14] Oct    [15] Binary\n");
	printf("[16] Dump     [17] AcSin    [18] AcCos [19] AcTan  [20] Hypersin\n");
	printf("[21] HyperCos [22] HyperTan\n\n");
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%lf",&a);
	printf("������ �Է��ϼ���\n");
	scanf("%d",&b);
	
	switch(b)
	{
	
	case 1 : Tan1(a);break;
	case 2 : Sin1(a);break;
	case 3 : Cos1(a);break;
	case 4 : Fabs(a);break;
	case 5 : G1(a);break;
	case 6 : printf("=\n");printf("%lf\n",fact(a));break;
	case 7 : ln(a);break;
	case 8 : Log(a);break;
	case 9 : pi(a);break;
	case 10 : square2(a);break;
	case 11 : square3(a);break;
	case 12 : INT(a);break;
	case 13 : Hex(a);break;
	case 14 : Oct(a);break;
	case 15 : Binary(a);break;
	case 16 : dump(a);break;
	case 17 : as(a);break;
	case 18 : ac(a); break;
	case 19 : at(a); break;
	case 20 : sh(a); break;
	case 21 : ch(a); break;
	case 22 : th(a); break;
			 
	default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}


}



void EngineeringTwo()//���п� ���ڸ� ����
{
	double a,c ;
	int b;
	clrscr();
	printf("���п� �ΰ��Ǽ� ���� �Դϴ�\n\n");
	printf("[1] -   [2] +   [3] /   [4] *   [5] Exp	   \n");
	printf("[6] a^b [7] And [8] Mod [9] Or  [10] Xor   \n");
	printf("[11] << [12] Pita                        \n\n");
	printf("ù��° ���� �Է��ϼ���\n");
	scanf("%lf",&a);
	printf("������ �Է��ϼ���\n");
	scanf("%d",&b);

	printf("�ι�°° ���� �Է��ϼ���\n");
	scanf("%lf",&c);
	
	
	
	switch(b)
	{
	case 1 : Sub(a,c); break; //����  
	case 2 : Sum(a,c); break; //���ϱ� 
	case 3 : Div(a,c); break; //������ 
	case 4 : Mul(a,c); break; //���� 
	case 5 : Exp(a,c); break; //Exp
	case 6 : square(a,c);break;//a^b
	case 7 : And(a,c);break;//and
	case 8 : Mod(a,c);break;//Mod
	case 9 : Or(a,c);break;//Or
	case 10: Xor(a,c);break;//Xor
	case 11: LSHleft(a,c);break;//<<
	case 12 :pita(a,c);break;//��Ÿ���
	default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}

}






//���п� ���ڸ� -------------
void Exp(double x, double y) //Exp
{
	int i;
	
	printf("%d",(int)x);
	
	for(i = 1; i <=(int)y; i++)
	{
		printf("0");
	}
	printf("\n");
}

void square(double x, double y) // x^y
{
	printf("= \n");
	printf("%lf\n",pow(x,y));
}

void And(double x, double y) // and
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("And���� = %d\n", a & b);
}
void Mod(double x, double y) // Mod
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Mod���� = %d\n", a % b);
}
void Or(double x, double y) // Or
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Or���� = %d\n", a | b);
}
void Xor(double x, double y) // Xor
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Xor���� = %d\n", a ^ b);
}
void LSHleft(double x, double y) //LSHleft
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("<<���� = %d\n", a << b);
}

void pita(double x, double y)//��Ÿ���
{
	printf("%lf\n",hypot(x,y));
}
//--------------------------






//���п� ���ڸ�--------------
double Sin1(double x)//����
{
	double result;
	result=sin(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}

void Tan1(double x)//ź��Ʈ
{
	printf("= \n");
	printf("%lf\n",tan(x));
	
}

double Cos1(double x)// �ڽ���
{
	double result;
	result=cos(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}
double Fabs(double x)//���밪 
{
	double result=0;
	result=fabs(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}

void G1(double x)//������ 
{
	printf("= \n");
	printf("%.1le\n",x);
	
}
double fact(double x)//���丮��
{
    double re = 1;
	
    for(;x>0 ; x--)
    {
        re *= x;
    }
	return re;
}
void ln(double x)//ln
{
	printf("= \n");
	printf("%lf\n",log(x));
}

void Log(double x) //log
{
	printf("= \n");
	printf("%lf\n",log10(x));
}

void pi(double x)//PI
{
	double p = 3.1415926535;
	double result;
	
	result = (double)x * p;
	printf("= \n");
	printf("%lf\n",result);
	
}
void square2(double x)//a^2
{
	printf("= \n");
	printf("%lf\n",pow(x,2));
}
void square3(double x)//a^3
{
	printf("= \n");
	printf("%lf\n",pow(x,3));
}

void INT(double x) // �Ǽ��Է� �������
{
	printf("= \n");
	printf("%d\n", (int)x);
}

void Hex(double x) // �����Է� 16���� ���
{
	int a;
	a = (int)x;
	printf("16���� : %X\n", a);
}
void Oct(double x) //�����Է� 8���� ���
{
	int a;
	a = (int)x;
	printf("8���� : %o\n", a);
}
void Binary(double x) //���� �Է� 2���� ���
{
	int binary = 0;
	int i = 1;
	int j;
	int a;
	a = (int)x;
	for(j = a;j > 0;j--)
	{
		binary = binary + (a % 2) * i;
		i = i * 10;
		a = a / 2;
	}
	
	printf("2���� : %d\n", binary);
}
void dump(double x)//���� �Լ� 
{
	printf("%lf\n",floor(x));
	
}
void as(double x) //Acsin
{
	
	printf( "ArcSin of %f = %f\n", x, asin(x));
} 
void ac(double x) //Accos
{
	
	printf( "ArcCos of %f = %f\n", x, acos(x));
} 
void at(double x) //Actan
{
	
	printf( "ArcTan of %f = %f\n", x, atan(x));
} 
void sh(double x) // sinh
{
	
	printf( "HyperbolicSin of %f = %f\n", x, sinh(x));
} 
void ch(double x) //cosh
{
	
	printf( "HyperbolicCos of %f = %f\n", x, cosh(x));
} 
void th(double x) // tanh
{
	
	printf( "HyperbolicTan of %f = %f\n", x, tanh(x));
} 
//----------------------------





//�Ϲݿ� ���ڸ�---------------
double Sqrt1(double x)// ������(��Ʈ)
{
	double result;
	result=sqrt(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}
double X1(double x) //1/x // �м��� 
{
	double result;
	result=1/x;
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}




//----------------------------
//�Ϲݿ� ���ڸ� --------------
void Per(double x,double y)//�����
{
	double Mul,Per;
	Mul=x*y;
	Per=(double)Mul/100;	
	printf("= \n");
	printf("%lf\n\n",Per);
}
//----------------------------
//���� ���ڸ� ----------------
void Sub(double x,double y)//����
{
	double Sub;
	Sub = x-y;
	printf("= \n");
	printf("%lf\n\n",(x-y));
}
void Sum(double x,double y)//���ϱ�
{
	double Sum;
	Sum= x+y;
	printf("= \n");
	printf("%lf\n",Sum);
}

void Div(double x,double y)//������
{
	double Div;
	Div= x/y;
	printf("= \n");
	printf("%lf\n",x/y);
}
void Mul(double x,double y)//����
{
	double Mul;
	Mul= x*y;
	printf("= \n");
	printf("%lf\n",Mul);
}


//----------------------------
// ���� �Լ� ..
 void Cul8()
 {
	 int a,c,b;
	 
	 clrscr();
	 printf("[���п�] 8���� ���� �Դϴ�\n\n");
	 printf("[1] Oct+ [2] Oct- [3] Oct*  [4] Oct/\n\n");
	 printf("ù��° ���� �Է��ϼ���(8������)\n");
	 scanf("%o",&a);
	 printf("������ �Է��ϼ���\n");
	 scanf("%d",&b);
	 printf("�ι�°° ���� �Է��ϼ���(8������)\n");
	 scanf("%o",&c);
	 
	 
	 switch(b)
	 {
	 case 1 : OctSum(a,c);break;
	 case 2 : OctMinus(a,c);break;
	 case 3 : OctMul(a,c);break;
	 case 4 : OctDiv(a,c);break;
	default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}
 }



void Cul16()
{
	int a,c,b;

	clrscr();
	printf("[���п�] 16���� ���� �Դϴ�\n\n");
	printf("[1] Hex+ [2] Hex- [3] Hex*  [4] Hex/\n\n");
	printf("ù��° ���� �Է��ϼ���(16������)\n");
	scanf("%X",&a);
	printf("������ �Է��ϼ���\n");
	scanf("%d",&b);
	printf("�ι�°° ���� �Է��ϼ���(16������)\n");
	scanf("%X",&c);
	

	switch(b)
	{ 
		case 1 : HexSum(a,c);break;
		case 2 : HexMinus(a,c);break;
		case 3 : HexMul(a,c);break;
		case 4 : HexDiv(a,c);break;
		default : printf("�߸��Է��ϼ̽��ϴ�\n");
	}

}
// 16���� ���ϱ� 
void HexSum(int x, int y)
{
	printf("=\n");
	printf("%X\n", x + y);
}
void HexMinus(int x, int y)// 16���� ���� 
{
	printf("=\n");
	printf("%X\n", x - y);
}

void HexMul(int x, int y)
{
	printf("=\n");
	printf("%X\n", x * y);
}
void HexDiv(int x, int y)
{
	printf("=\n");
	printf("%X\n", x / y);
}

//8���� ���� ------------------------
void OctSum(int x, int y)
{
	printf("=\n");
	printf("%o\n", x + y);
}
void OctMinus(int x, int y)
{
	printf("=\n");
	printf("%o\n", x - y);
}
void OctMul(int x, int y)
{
	printf("=\n");
	printf("%o\n", x * y);
}
void OctDiv(int x, int y)
{
	printf("=\n");
	printf("%o\n", x / y);
}




void clrscr()
{
	system("cls");
}

