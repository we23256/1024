#inculde<stdio.h>

int main()
{
	int i, num, hap=0;
	
	printf("���� ���� �Է�:");
	scanf("$d", &num);
	
	i = num;
	
	do{
		hap += i;
		i--;
   }while(i >0);
    printf("1���� %d������ �� = %d �Դϴ�.\n" , num, hap );
    
    return 0;
}
