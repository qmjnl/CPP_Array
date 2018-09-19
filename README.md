# Simple array class
Простой класс массива

## Правила решения
Результат решения задачи должен представлять из себя компилирующийся и запускающийся проект для Microsoft Visual Studio (C++), содержащий исходные файлы с решением задачи.

Решением задачи является класс, написанный на языке С++ и соответствующий всем указанным в задаче требованиям, а также код, позволяющий оценить результаты ее выполнения.

При решении задачи не допускается использование любых контейнеров Standard C++ library.

## Задача
Написать шаблонный класс - массив данных произвольного типа, и тесты, демонстрирующие работу с этим классом. Должны быть реализованы все методы нижеуказанной декларации класса, также допустимо расширить функционал класса дополнительными методами.

__Декларация__
``` c++
template <typename TData>
class CArray
{
public: // Interface

  // Конструктор по умолчанию
  CArray();

  // Копирующий конструктор
  CArray(
      const CArray & _array
    );

  // Деструктор
  ~CArray();
 
  // Добавить элемент в конец массива
  void push_back(
      const TData & _value
    );

  // Добавить элемент в массив по заданному индексу
  void insert(
      unsigned int  _index,
      const TData & _value
    );

  // Удалить элемент массива по заданному индексу
  void erase(
      unsigned int _index
    );

  // Очистить массив
  void clear();

  // Получить размер массива
  unsigned int size() const;
 
  // Получить элемент массива по заданному индексу
  TData & operator[](
      unsigned int _index
    );

protected: // Attributes
  //...
};
```

## Проверка работы
Решение должно демонстрировать работу класса при помощи следующих тестов:

__Работа с числами (int).__
1. добавление в цикле 20 случайных чисел в диапазоне от 0 до 100.
1. упорядочивание получившегося набора чисел по возрастанию.
1. удаление каждого 2 элемента.
1. вставка 10 случайных чисел в диапазоне от 0 до 100 на случайные позиции.
1. очистка контейнера.

После каждого этапа необходимо выводить содержимое массива на экран.

__Работа с объектами (std:string)__
1. добавление в цикле 15 случайно выбранных слов, состоящих из латинских букв в нижнем регистре.
1. упорядочивание получившегося набора слов по возрастанию.
1. удаление каждого слова, включающего в себя любую из букв a, b, c, d, e.
1. вставка 3 новых случайно выбранных слов на случайные позиции.

После каждого этапа необходимо выводить содержимое массива на экран.
