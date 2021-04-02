# Упражнение 1
## Задача 1. Басейн с три тръби
Басейн е с форма на паралелепипед, чиито размери са A, B, C в метри. Може да се пълни едновременно от три тръби, съответно с дебит: D1, D2, D3. Дебитът е кубически метра/час. Да се състави програма, изчисляваща за колко време би се напълнил басейнът, ако и трите тръби работят едновременно. A, B, C, D1, D2, D3 се въвеждат от клавиатурата.
```
double h = (a * b * c) / (d1 + d2 + d3);
```

## Задача 2. Средна скорост
Автомобил се движи T1 часа със средна скорост V1 km/h и T2 часа със средна скорост V2 km/h. Да се състави програма, която  изчислява средната скорост на автомобила.  T1, V1, T2, V2 се въвеждат от клавиатурата.
```
double S = (V1 * T1) + (V2 * T2) / (T1*T2);
```

## Задача 3. Цистерна
Трябва да се напълни цистерна с вода. Имате 2 кофи с вместимост 2 и 3 литра и ги ползвате едновременно. Да се състави програма, която по въведен обем извежда как ще прелеете течността с тези кофи, т.е. по-колко пъти ще се пълни всяка от кофите. 
- Примерен вход: 107 
- Примерен изход: 21 пъти двете кофи и една кофа от 2 литра
```
int total = volume / 5;
int reminder = volume % 5;
cout << total << " times  ";
switch(reminder)
{
	case 1: cout << " + 1 litre"; break;
	case 2: cout << " + 1 x 2 litres."; break;
	case 3: cout << " + 1 x 3 litres."; break;
	case 4: cout << " + 2 x 2 litres"; break;
}
```

## Задача 4. Телеграма
Преди доста години имаше услуга - изпращане на луксозна телеграма. Поводи най-различни: рожден, имен ден, сватба и т.н. Цената се формираше по следния начин А: цена за бланка, B: цена за текст до 20 думи, C: цена за всяка дума, след първите 20 думи. Да се състави програма, чрез която по въведени брой думи, стойности за A, B и C се изчислява крайна цена на луксозна телеграма.
- Примерен вход: думи=45, A=0.2, B=0.5, C=0.05
- Примерен изход: 1.95
```
double remainder = (words - 20) > 0 ? (words - 20) : 0;
double total = (a + b + (remainder * c));
```

## Задача 5. Транспорт
Местната общинска управа решила празника на града да се празнува до местния манастир. За целта наели транспортна фирма за превоз на желаещите. Уговорката била за 100-200 човека. Фирмата паркирала 3 автобуса всеки с места от интервала [100..200]. Събралите се скупчили около първия автобус, малцина се качили във втория. Самият кмет, всички съветници, общо 30 човека и може би още 1-2 се качили в третия автобус. След допитване с демократичния кмет шефът на фирмата наредил във всеки автобус да има равен брой пътници. Да се състави програма, чрез която се въвеждат броя пътници в първите два автобуса и да ги разпределя по равно в трите автобуса.
- Примерен вход: 43 46 
- Примерен изход: bus 1 = -3, bus 2 = -6, bus 3 = +9
```
int b3 = (a+b)/3;
int b1 = b3 - a;
int b2 = b3 - b;
cout << "b1: " << b1 << "  b2: " << b2 << " b3: " << b3 << endl;
```

## Задача 6. Аудио запис
Мария, сестрата на Иван, се омъжи и скоро Иван стана вуйчо. Но не си мислете, че да си вуйчо е лека работа - като ти оставят онова ревливо чудо, което от дума не разбира, а трябва да го забавляваш, че иначе момченцата от плач могат да се изсипят (херния да получат). Иван бързо разбира, че малкия пискун стои кротко, ако някой му приказва и/или чува собствения си глас. Решението е моментално и кардинално. Взема стария си компютър с 2 GB диск и решава запис на племенника си да прави. Записът е с висока компресия (1 секунда звук - 1 килобайт файл). Все пак не се записва някой хит - последен писък на модата. Пуска записа - племенника се заслушва и всичко е тихо до 5 минути след приключване на записа. Но започват проблемите: дискът вече е претъпкан, а и производителят е хитрувал - капацитета на диска е в байта, а не в килобайта. Да се състави програма, чрез която по въведено свободно място на диска и време за запис в часове, минути, секунди се проверява дали може да се запише звук с определеното времетраене.
- Примерен вход: свободно място 456789, време часове 0, минути 25, секунди 36
- Примерен изход: няма място

```
float freespace = space / 1024;
int timing = (hours * 3600) + (minutes * 60) + seconds;
```