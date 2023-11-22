# Отчет по лабораторной работе N 15 по курсу
# "Фундаментальная информатика"

Студент группы: M8О-115Б, Самарский Ярослав Вадимович\
Контакты: yaroslav.samarskij@mail.ru \
Работа выполнена: 22.11.2023\
Преподаватель: Чеснов Илья Игоревич

## 1. Тема

Обработка матриц

## 2. Цель работы

Составить программу на языке C, производящую обработку квадратной матрицы NxN

## 3. Задание

Вариант 10. Циклический сдвиг элементов матрицы в столбцовом представлении на n элементов, где n - номер группы (115)

## 4. Оборудование

Процессор: Intel Core i5-8265U @ 8x 3.9GH\
ОП: 7851 Мб\
НМД: 1024 Гб\
Монитор: 1920x1080

## 5. Программное обеспечение

Операционная система семейства: **linux (ubuntu)**, версия **18.10 cosmic**\
Интерпретатор команд: **bash**, версия **4.4.19**.\
Система программирования: **--**, версия **--**\
Редактор текстов: **emacs**, версия **25.2.2**\
Утилиты операционной системы: **--**\
Прикладные системы и программы: **--**\
Местонахождение и имена файлов программ и данных на домашнем компьютере: **--**

## 6. Идея, метод, алгоритм решения задачи

Циклически передвигать строки вверх n % N раз (n - номер группы, N - размер стороны квадратичной матрицы)

## 7. Сценарий выполнения работы

План:
1. Считать матрицу из файла
2. Перебирать каждый столбец
3. Для каждого столбца перебирать элементы
4. Поднимать элементы вверх используя временную переменную
5. Повторить, начиная с п.2, n % N раз
6. Вывести результат

## 8. Распечатка протокола

```
Входные данные (содержимое файла)
1 2 3
4 5 6
7 8 9

Вывод программы
7 8 9
1 2 3
4 5 6
```

```
Входные данные (содержимое файла)
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Вывод программы
5 6 7 8
9 10 11 12
13 14 15 16
1 2 3 4
```

## 9. Дневник отладки

| №   | Лаб. или дом. | Дата       | Время | Событие                           | Действие по исправлению                 | Примечание                         |
|-----|---------------|------------|-------|-----------------------------------|-----------------------------------------|------------------------------------|
| 1   | Дом           | 22.11.2023 | 21:40 | Программа некорректно завершилась | Исправил обращения к массиву по индексу | Нужно следить за границами массива |
| 2   | Дом           | 22.11.2023 | 21:45 | Неожиданный результат             | Использовал % как в Python              | Фатальная ошибка                   |

## 10. Замечания автора по существу работы

Было очень интересно, разобрался с матрицами и делением по модулю как в Python

## 11. Выводы

Я реализовал обработку матриц на C, как я рад, это последняя лаба в этом семе, ура.
