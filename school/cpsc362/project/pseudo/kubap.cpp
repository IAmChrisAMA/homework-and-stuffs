 get userID();
 get userAge();
 displayUserInfo();
 getUserInputGameMode();
 1.timeMode()
 2.quizMode()
 3.practiceMode()
 4.calculatorMode()
 5.highScore()
Case1:
 displayTimeMode();
 userInputTimer();
 set time=userInputTimer();
 if (time &gt;0)
 {
 A = randomA();
 B = randomB();
 answerC = A+B;
 displayA();
 displayB();
 D= randomD();
 if D=== C then randomD();
 else displayD();
 If user click on answerC then add ++ correctCounter;
 else set A=randomA(); set B=randomA(); 
}
</font></font></font><font color="#000000"> else save correctCounter to log;
 print &ldquo; Retry?&rdquo; or &ldquo; exit&rdquo;
 if user click retry, get userInputTimer();
 if user click exit, return to main menu;
case2:
 question=setNumberOfQuestion();
 setArrayASize = question;
 setArrayBSize= question;
 setArrayCsize= question;
 for( i =0; i&lt; question;i++)
{
 arrayA[i]= random();
 arrayB[i] = random();
 arrayC[i]=arrayA[i]+arrayB[i]

}
 for(i=0;i&lt;question;i++)
{
 print arrayA[i] &ldquo; + &ldquo; print arrayB[i] &ldquo; = &ldquo;
 arrayD[i]= userInput(); 
 if (arrayC[i]= arrayD[i] )
 correct++;
 else
 wrong++; 
}

 display correct and wrong to screen;
 for(i=0;i&lt;question;i++)
{
 display arrayA[i]&ldquo;+&rdquo; ArrayB[i] &ldquo;= &ldquo; arrayC[i] &ldquo;your Answer&rdquo; arrayD[i];

}
 ask user to continue quiz or exit to main screen
case3:
 
 if (continue = yes)
{ 
 A= randomNumber();
 B= randomNumber();
 C= A+B;
 display A &ldquo;+ &ldquo; B &ldquo;=&ldquo; then get userInput();
 compare to C to userInput();
 get userInputContinue();
} 
 else 
 exit to main menu

case4:
 display calculator

case5:
 DisplayScore();

