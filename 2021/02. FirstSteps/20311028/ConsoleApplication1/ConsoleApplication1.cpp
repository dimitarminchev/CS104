
@@ - 19, 7 + 19, 7 @@ Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "7. SumPro", "7. SumPro\7. S
EndProject
Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "8. Sum5", "8. Sum5\8. Sum5.vcxproj", "{D2934A6E-3738-497B-8551-72D9865FB985}"
EndProject
Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "9. Product6", "9. Product9\9. Product6.vcxproj", "{ABA4D717-888E-451E-A0B2-00D2FF4F3A9E}"
Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "9. Product6", "9. Product6\9. Product6.vcxproj", "{ABA4D717-888E-451E-A0B2-00D2FF4F3A9E}"
EndProject
Global
GlobalSection(SolutionConfigurationPlatforms) = preSolution
2  2. FirstSteps / 20311014 / 8. Sum5 / 8. Sum5.cpp
@@ - 13, 9 + 13, 7 @@ int main()

// Разделяне на цифрите на числото
int a1 = (a / 10000) % 10;
int a2 = (a / 1000) % 10;
int a3 = (a / 100) % 10;
int a4 = (a / 10) % 10;
int a5 = (a / 1) % 10;

// Пресмятане на сумата от цифрите на нечетните позиции
3  2. FirstSteps / 20311014 / 9. Product6 / 9. Product6.cpp
@@ - 12, 11 + 12, 8 @@ int main()
cin >> a;

// Разделяне на цифрите на числото
int a1 = (a / 100000) % 10;
int a2 = (a / 10000) % 10;
int a3 = (a / 1000) % 10;
int a4 = (a / 100) % 10;
int a5 = (a / 10) % 10;
int a6 = (a / 1) % 10;

// Пресмятане на произведението от цифрите на четните позиции