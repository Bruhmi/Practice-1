#include <iostream>
#include <ctime>

union unFl {
    int UIntVar;
    float UFlVar;
};

void idz() {
    int bitNum;
    int bit;
    std::cout << "������� ����� ����: ";
    std::cin >> bitNum;
    std::cout << "�������, �� ����� ��� ��������:";
    std::cin >> bit;




}

int Practice1() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    std::cout <<
        "������������� ������ �1\n\n"

        "���������:\n"
        "1) �������, ������� ������ (� ������) �� ����� ���������� ��������� ��� ��������� ���� ������ �� ��������������� � ���: "
        "int, short int, long int, float, double, long double, char � bool.\n"
        "2) ������� �� ����� �������� ������������� � ������ (��� �������) ���������� ������ �����.\n"
        "3) ������� �� ����� �������� ������������� � ������ (��� �������) ���������� ����� ���� float.\n\n";

    for (int stop = 0; stop < 1; stop) {
        int taskNumb;
        std::cout << "������� ����� ��������: ";
        std::cin >> taskNumb;

        switch (taskNumb) {
        case 1:
            std::cout <<
                "���������� ���-�� ������(� ������) �� ������ ���� ������:\n"
                "int: " << sizeof(int) << "\n" <<
                "short int: " << sizeof(short int) << "\n" <<
                "long int: " << sizeof(long int) << "\n" <<
                "float: " << sizeof(float) << "\n" <<
                "double: " << sizeof(double) << "\n" <<
                "long double: " << sizeof(long double) << "\n" <<
                "char: " << sizeof(char) << "\n" <<
                "bool: " << sizeof(bool) << "\n\n";
            break;

        case 2: {
            int intVar = rand();
            std::cout <<
                "��������� ����� �����: " << intVar << "\n" <<
                "�������� ������������� ����� " << intVar << " � ������: ";
            int order = sizeof(int) * 8;
            unsigned int mask = 1 << (order - 1);

            for (int i = 0; i < order; ++i) {
                std::cout << ((intVar & mask) ? 1 : 0);
                mask >>= 1;
                if (!i || !((i + 1) % 8)) {
                    std::cout << " ";
                }
            }
            std::cout << "\n\n";
            break;
        }

        case 3: {
            union {
                int tool1;
                float flVar;
            };
            unsigned int order = 32;
            flVar = (float)rand() / 7;
            unsigned mask = 1 << (order - 1);
            std::cout <<
                "C�������� ������������ �����: " << flVar << "\n"
                "�������� ������������� ����� " << flVar << " � ������: ";
            for (int i = 1; i <= order; i++) {
                std::cout << (tool1 & mask ? '1' : '0');
                mask >>= 1;
                if (i == 1)
                    std::cout << ' ';
                if (i == 9)
                    std::cout << ' ';
            }
            std::cout << "\n";
            break;
        }



        case 0: {
            stop = 1;
            break;



        }
        }
        return 0;
    }
}

