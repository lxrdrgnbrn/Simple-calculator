#ifndef OPERATIONS_H
#define OPERATIONS_H

enum Except{Error};

class Operations
{
public:
    Operations();//конструктор без параментров

    //Геттеры и сеттеры
    void setX(double _x);
    void setY(double _y);

    double getX()const;
    double getY()const;

    double Summ()const;//Сложение
    double Subtract()const;//Вычитание
    double Multiplication()const;//Умножение
    double Division()const;//Деление
    double Power()const;//Возведение в степень
    double Sin()const;//Синус
    double Cos()const;//Косинус
    double Tan()const;//Тангенс
    double Ln()const;//Натуральный логарифм
    double Exp()const;//Экспонента
    double Negative()const;//Изменить знак числа
    double Precent()const;//Перевод в проценты

private:
    double x,y;

};

#endif // OPERATIONS_H
