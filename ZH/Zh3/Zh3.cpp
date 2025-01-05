/*
3. �rj f�ggv�nyt, mely ki�rja az elso param�ter�ben �tvett char t�pus�
karaktert, valamint visszaadja a m�sodik param�tere �ltal, hogy
sz�mjegy-e (sz�mjegy: igaz, nem sz�mjegy: hamis)!
 */

#include <iostream>

void test(char c);
void doWork(char c, bool& is_digit);

int main()
{
  test('0'-1);
  test('0');
  test('9');
  test('9'+1);
}

void test(char c) {
  bool is_digit;
  doWork(c, is_digit);
  std::cout << (is_digit ? " igaz" : " hamis") << std::endl;
}

void doWork(char c, bool& is_digit)
{
  std::cout << c;
  is_digit = c >= '0' && c <= '9';
}