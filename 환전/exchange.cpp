#include <stdio.h> 

int main()
{
	//변수 선언
	float won, USD, JPY, EUR,  CNY, GBP;         //환전 금액 
	int EX_USD, EX_JPY, EX_EUR, EX_CNY, EX_GBP;  //환전후 거스름돈 계산  
	int EX500, EX100,EX10;                       //거스름돈 줄 방법  
	
	//1외화당 원화 가격 
	const int USD_T_W =1232, JPY_T_W =10, EUR_T_W=1353, CNY_T_W=195, GBP_T_W= 1613;

	int changeR, EX_changeR;
	int suntek;
	
	printf("환전을 원하는 금액을 입력하세요(원화) : ");	
	// scanrf 로 가격 받기
	scanf("%f", &won);
	//환전할 외화 선택
	printf("환전할 외화를 선택하세요 (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) :");
	scanf("%d",&suntek);

	//환전과정 n원당 몇 외화 , 실수  
	USD = won/USD_T_W;
	JPY = won/JPY_T_W;
	EUR = won/EUR_T_W;
	CNY = won/CNY_T_W;
	GBP = won/GBP_T_W;
	
	//거스름돈 계산, 1원 절삭  원화에서 /10 한상태  
	EX_USD = (USD-(int)USD)*USD_T_W/10;
	EX_JPY = (JPY-(int)JPY)*JPY_T_W/10;
	EX_EUR = (EUR-(int)EUR)*EUR_T_W/10;
	EX_CNY = (CNY-(int)CNY)*CNY_T_W/10;
	EX_GBP = (GBP-(int)GBP)*GBP_T_W/10;

	//출력
	printf("%.0f 원의 환전금액은 \n",won);
	
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
			printf("오류가 발생했습니다. 다시 실행해 주세요.");
			break; 
	}
	//500원 100원 10원 몇개 출력 

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

	
	printf("환전액:  %-6d \n",changeR) ;
	printf("거스름 돈 : %d 원\n", EX_changeR*10);

	printf("500원: %d개, 100원: %d개, 10원: %d개 받아가세요.", EX500,EX100,EX10);


	return 0;
}
