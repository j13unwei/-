#include <stdio.h>

// ģ���ȡ�¶�ֵ�ĺ���
float getTemperature(int t) {
    // ����򵥷���һ���̶�ֵ��ʵ��Ӧ����Ӧ�Ӵ�������ȡ
    return t; 
}

int main() {
	int t;
	scanf("%d",&t);
    float temperature = getTemperature(t);
    printf("��ǰ�ɼ������¶�ֵΪ: %.2f ���϶�\n", temperature);
    return 0;
}
