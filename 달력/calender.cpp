//�޷� ���
#include <stdio.h> 
int main()
{
	// ���� ����
	//dayDiff: �Է� �⵵,���� 1�ϱ����� ��¥���� ex) 2019.9.1 - 1900.1.1 / ������ �Ǻ��Ҷ� ��� 
	//monthDay:  �޷��� ����Ҷ�, �Է� ���� ��ĥ���� �����ϴ��� �Ǵ��Ҷ� ��� 
	int inputYear, inputMonth, dayDiff, monthDay;
	
	
	for (;;) {
	//���� ���
	printf("1900�� ���ĸ� �Է����ּ���.\n"); 	//1900�� 1�� 1�� (��)  
	printf("�⵵ �Է� : ");
	scanf("%d",&inputYear); 
	printf("�� �Է� : ");
	scanf("%d",&inputMonth);
		if(inputYear==0 || inputMonth==0) {
			break; 
		} else {
			printf("======= %d��%2d�� =========\n ��  ��  ȭ  ��  ��  ��  ��\n",inputYear,inputMonth);
		
			// 1900����� �Է� ���� 1��1�ϱ����� ���
			dayDiff = (inputYear-1900)*365 + 1;
			//������ ��� +1��
			for (int index = 1900; index < inputYear; index++) {
				if ((index%4 ==0 && index%100 != 0) || index%400 == 0) {
					dayDiff++;
				}
			}
			
			// + ���� ���� �ϼ� ���/ ������ �Է��� ���� �ϳ� ���������� �ϼ��� ���Ѵ�. ex) inputMonth = 2 �̸� 1������ �ϼ� �����ش�. 
			// �Բ� monthDay�� �� �Է�
			if (inputMonth==2) {
				dayDiff +=  31	;  //1���ϼ� 
				if ((inputYear%4 ==0 && inputYear%100 != 0) || inputYear%400 == 0) {
					monthDay = 29;
				} else {
					monthDay = 28;
				}
			} else if (inputMonth == 3) {
				dayDiff +=  59;   //1�� + 2�� �ϼ� 
				monthDay = 31;    //3�� �� ��  
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
		
			//�����̰� inputMonth�� 3�� �̻��϶� +1�� ���ش�. 
			if (((inputYear%4 ==0 && inputYear%100 != 0) || inputYear%400 == 0) && inputMonth >= 3) {
				dayDiff ++;
			}
		
			// ���� ��ġ ����, ���Ϻ��� �տ� ����� â��, �Ͽ���: 0ĭ, ������: 2ĭ, ȭ����: 4ĭ.... ��� ���� �Է� 
			for (int i=1; i <= ((dayDiff%7)*2);i++){
				printf("  ");	
			}

    		// ���Ϻ��� �޷�  
			for (int j =1, dayChk=dayDiff; j <= monthDay; j++,dayChk++) {
    			printf("%3d ", j);
    			if (dayChk%7 == 6) { //������� ��� �Ʒ��� �ѱ�
     	  	 		printf("\n");
   				}
   			}
   			
   			printf("\n\n");
		}
	}



	return 0;
}
