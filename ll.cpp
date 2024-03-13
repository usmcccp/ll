
#include <iostream>

using namespace std;

class Right
{
    float m_a, m_b;
public:
    Right(float a, float b) //Конструктор полного заполнения
    {
        m_a = a;
        m_b = b;
    }
    
    Right(); //Конструктор по умолчанию

    void setter(float a, float b) 
    {
        while(a <= 0)
        {
            cout << "Отрицательная сторона (a)" << endl << "Введите значение заново:" << endl;
            cin >> a;
        }
        m_a = a;
        
        while(b <= 0)
        {
            cout << "Отрицательная сторона (b)" << endl << "Введите значение заново:" << endl;
            cin >> b;
        }
        m_b = b;
    }
    
    Right(const Right& other) //Конструктор копирования
    {
        m_a = other.m_a;
        m_b = other.m_b;
    }

    ~Right()  //Деструктор по умолчанию
    {
        std::cout << "Class deleted" << endl;
    }

    float square() //Площадь
    {
        float s;
        s = m_a * m_b;
        cout << "Площадь:" << " " << s << endl;
        return s;
    }
    
    float GetMin() //Геттер минимальной стороны
    {
        if (m_a > m_b)
        {
            cout << "Наименьшая сторона равна:" << " " << m_b << endl;
            return m_b;
        }
        else
        {
            cout << "Наименьшая сторона равна:" << " " << m_a << endl;
            return m_a;
        }
    }

    float Getall() //Геттер всей информации
    {
        float s;
        s = m_a * m_b;

        cout << "Сторона (a):" << " " << m_a << endl;
       
        cout << "Сторона (b):" << " " << m_b << endl;
        
        cout << "Площадь:" << " " << s << endl; 
        return 0;
    }
};

int main()
{
    setlocale(0, "");
    
    float a, b;
    
    cout << "Введите стороны прямоугольника" << endl;
    cin >> a >> b;
    
    Right X(a, b);

    X.GetMin();
    X.square();
    X.Getall();
    return 0;
}
