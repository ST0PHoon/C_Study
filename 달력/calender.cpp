//달력 출력
#include <stdio.h> 
int main()
{
	// 변수 선언
	//dayDiff: 입력 년도,월의 1일까지의 날짜차이 ex) 2019.9.1 - 1900.1.1 / 요일을 판별할때 사용 
	//monthDay:  달력을 출력할때, 입력 월이 며칠까지 존재하는지 판단할때 사용 
	int inputYear, inputMonth, dayDiff, monthDay;
	
	
	for (;;) {
	//질문 출력
	printf("1900년 이후를 입력해주세요.\n"); 	//1900년 1월 1일 (월)  
	printf("년도 입력 : ");
	scanf("%d",&inputYear); 
	printf("월 입력 : ");
	scanf("%d",&inputMonth);
		if(inputYear==0 || inputMonth==0) {
			break; 
		} else {
			printf("======= %d년%2d월 =========\n 일  월  화  수  목  금  토\n",inputYear,inputMonth);
		
			// 1900년부터 입력 연도 1월1일까지의 계산
			dayDiff = (inputYear-1900)*365 + 1;
			//윤년일 경우 +1일
			for (int index = 1900; index < inputYear; index++) {
				if ((index%4 ==0 && index%100 != 0) || index%400 == 0) {
					dayDiff++;
				}
			}
			
			// + 월을 통한 일수 계산/ 월별로 입력한 월의 하나 이전까지의 일수를 더한다. ex) inputMonth = 2 이면 1월까지 일수 더해준다. 
			// 함께 monthDay에 값 입력
			if (inputMonth==2) {
				dayDiff +=  31	;  //1월일수 
				if ((inputYear%4 ==0 && inputYear%100 != 0) || inputYear%400 == 0) {
					monthDay = 29;
				} else {
					monthDay = 28;
				}
			} else if (inputMonth == 3) {
				dayDiff +=  59;   //1월 + 2월 일수 
				monthDay = 31;    //3월 일 수  
			} else if (inputMonth == 4) {
				dayDiff +=  90;
				monthDay = 30;
			} else if (inputMonth == 5) {
				dayDiff +=  120;
				monthDay = 31;
			} else if (inputMonth == 6) {
				dayDiff +=  151;
				monthDay = 30;
			} else if (inputMonth == 7) {
				dayDiff +=  181;
				monthDay = 31;
			} else if (inputMonth == 8) {
				dayDiff +=  212;
				monthDay = 31;
			} else if (inputMonth == 9) {
				dayDiff +=  243;
				monthDay = 30;
			} else if (inputMonth == 10) {
				dayDiff +=  273;
				monthDay = 31;
			} else if (inputMonth == 11) {
				dayDiff +=  304;
				monthDay = 30;
			} else if (inputMonth == 12) {
				dayDiff +=  334;
				monthDay = 31;
			} else {
				monthDay = 31;
			}
		
			//윤년이고 inputMonth가 3월 이상일때 +1일 해준다. 
			if (((inputYear%4 ==0 && inputYear%100 != 0) || inputYear%400 == 0) && inputMonth >= 3) {
				dayDiff ++;
			}
		
			// 시작 위치 선점, 요일별로 앞에 빈공간 창출, 일요일: 0칸, 월요일: 2칸, 화요일: 4칸.... 띄고 숫자 입력 
			for (int i=1; i <= ((dayDiff%7)*2);i++){
				printf("  ");	
			}

    		// 요일별로 달력  
			for (int j =1, dayChk=dayDiff; j <= monthDay; j++,dayChk++) {
    			printf("%3d ", j);
    			if (dayChk%7 == 6) { //토요일일 경우 아래로 넘김
     	  	 		printf("\n");
   				}
   			}
   			
   			printf("\n\n");
		}
	}



	return 0;
}
