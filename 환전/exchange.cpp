#include <stdio.h> 

int main()
{
	//���� ����
	float won, USD, JPY, EUR,  CNY, GBP;         //ȯ�� �ݾ� 
	int EX_USD, EX_JPY, EX_EUR, EX_CNY, EX_GBP;  //ȯ���� �Ž����� ���  
	int EX500, EX100,EX10;                       //�Ž����� �� ���  
	
	//1��ȭ�� ��ȭ ���� 
	const int USD_T_W =1232, JPY_T_W =10, EUR_T_W=1353, CNY_T_W=195, GBP_T_W= 1613;

	int changeR, EX_changeR;
	int suntek;
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");	
	// scanrf �� ���� �ޱ�
	scanf("%f", &won);
	//ȯ���� ��ȭ ����
	printf("ȯ���� ��ȭ�� �����ϼ��� (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) :");
	scanf("%d",&suntek);

	//ȯ������ n���� �� ��ȭ , �Ǽ�  
	USD = won/USD_T_W;
	JPY = won/JPY_T_W;
	EUR = won/EUR_T_W;
	CNY = won/CNY_T_W;
	GBP = won/GBP_T_W;
	
	//�Ž����� ���, 1�� ����  ��ȭ���� /10 �ѻ���  
	EX_USD = (USD-(int)USD)*USD_T_W/10;
	EX_JPY = (JPY-(int)JPY)*JPY_T_W/10;
	EX_EUR = (EUR-(int)EUR)*EUR_T_W/10;
	EX_CNY = (CNY-(int)CNY)*CNY_T_W/10;
	EX_GBP = (GBP-(int)GBP)*GBP_T_W/10;

	//���
	printf("%.0f ���� ȯ���ݾ��� \n",won);
	
	switch(suntek)
	{
		case 1:
			changeR = USD;
			EX_changeR = EX_USD;
			break;
		
		case 2:
			changeR = JPY;
			EX_changeR = EX_JPY;
			break;
		
		case 3:
			changeR = EUR;
			EX_changeR = EX_EUR;
			break;
		
		case 4:
			changeR = CNY;
			EX_changeR = EX_CNY;
			break;
		
		case 5:
			changeR = GBP;
			EX_changeR = EX_GBP;
			break;
		
		default:
			printf("������ �߻��߽��ϴ�. �ٽ� ������ �ּ���.");
			break; 
	}
	//500�� 100�� 10�� � ��� 

	if ( EX_changeR/10 >= 5)
	{
		EX500 = 1;
		EX100 = (EX_changeR%50)/10 ;
		EX10 = EX_changeR%10;
	}
	else
	{
		EX500 = 0;
		EX100 = EX_changeR/10 ;
		EX10 = EX_changeR%10 ;
	}

	
	printf("ȯ����:  %-6d \n",changeR) ;
	printf("�Ž��� �� : %d ��\n", EX_changeR*10);

	printf("500��: %d��, 100��: %d��, 10��: %d�� �޾ư�����.", EX500,EX100,EX10);


	return 0;
}
