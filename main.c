#include <stdio.h>

// ģ���ȡ�¶�ֵ�ĺ���
float getTemperature() {
    // ����򵥷���һ���̶�ֵ��ʵ��Ӧ����Ӧ�Ӵ�������ȡ
    return 25.0; 
}

int main() {
    float temperature = getTemperature();
    printf("��ǰ�ɼ������¶�ֵΪ: %.2f ���϶�\n", temperature);
    return 0;
}
