# CS104 - Програмиране
Инструкции за работа по дисциплината "Програмиране" под операционни системи Windows и Linux.

## Windows
Препоръчително използвайте **Microsoft Visual Studio 2022 Comunity Edition**, която можете да изтеглите от Интернет на адрес: https://visualstudio.microsoft.com/downloads/. 

При инсталацията включете опцията **Desktop Development with C++**.

## Linux
За настройка на **Visual Studio Code** под операционна система Ubuntu Linux в компютърна лаборатория 6 на БСУ, следвайте следните стъпки:

1. Клонирайте електронното хранилище, като използате **Terminal** и напишете следните команди:
```
cd /home/student/Desktop
git clone https://github.com/dimitarminchev/CS104.git
```
2. Конфигурирайте Вашите персонални настройки за **Github**, като продължите в Terminal и напишете следните команди:
```
cd /home/student/Desktop/CS104
git remote set-url origin https://PERSONAL_ACCESS_TOKEN@github.com/dimitarminchev/CS104.git
```
3. Заменете **PERSONAL_ACCESS_TOKEN** със стойност, която се генерира от тук: https://github.com/settings/tokens

4. Стартирайте **Visual Studo Code** и от менюто **File > Open Folder** [Ctrl + К, Ctrl + О] отворете папката **/home/student/Desktop/CS104**.

5. Компилиране на текущата програма се извършва от **Run & Debug** [Ctrl + Shift + G] с натискане на бутон **Run & Debug**.

6. Направените промени се качват обратно в електронното хранилише от **Source Control** [Ctrl + Shift + G] с натискане на бутон **Commit & Push**.

_Дата на последна актуализация: Март 2024_
