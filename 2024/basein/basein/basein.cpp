#include <iostream>

int main() 
{
    int V, D1, D2, D3;

    // ��������� �� �����
    std::cout << "�������� ���� �� ������� (� ���. �): ";
    std::cin >> V;
    std::cout << "�������� ����� �� ����� D1 (� ���. �/�): ";
    std::cin >> D1;
    std::cout << "�������� ����� �� ����� D2 (� ���. �/�): ";
    std::cin >> D2;
    std::cout << "�������� ����� �� ����� D3 (� ���. �/�): ";
    std::cin >> D3;

    // �������� �� ����������� ������
    if (D1 < 0 || D2 < 0 || D3 < 0) {
        std::cout << "������: ���� �� ������� ��� ����������� ����� � �������� �������.\n";
        return 1; // ����� � ������
    }

    // ����������� �� ������� �� ��������� �� �������
    double time1 = static_cast<double>(V) / D1; // ����� � ������
    double time2 = static_cast<double>(V) / D2;
    double time3 = static_cast<double>(V) / D3;

    // �������� �� ���-������� �����
    double min_time = std::min(std::min(time1, time2), time3);

    // ��������� �� ���������
    std::cout << "Baseina shte se napalni za " << min_time << " chasa.\n";
    return 0;
}