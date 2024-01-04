using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;



public class Question22 : MonoBehaviour
{
    public Text questionText;
    public Text[] answerText;
    public Text correctDisplay;
    public GameObject panelResult;

    public GameObject next,home;
    public GameObject correct, incorrect, Win;
    int numberQuestion;
    public controllQandA controlQust;
    public int gameRound;
    public int[] randomAns;
    void Start()
    {
        GenerateQuestion();
    }
public void BTAnswer()
    {
        Text currentAnswer = EventSystem.current.currentSelectedGameObject.transform.GetChild(0).GetComponent<Text>();
        if (currentAnswer.text == controlQust.qustions[numberQuestion].elementQuestion.Ans[controlQust.qustions[numberQuestion].elementQuestion.AnswerCorrect])
        {
            Debug.Log("correct");
             next.SetActive(true);
           correct.SetActive(true);
           incorrect.SetActive(false);
            Win.SetActive(false);
            if (numberQuestion >= gameRound)
            {
               correctDisplay.GetComponent<Text>().text = "Congratulstions";
                next.SetActive(false);
                home.SetActive(false);
                

              correct.SetActive(false);
              incorrect.SetActive(false);
                Win.SetActive(true);
            }
            
        }
        else
        {
            Debug.Log("incorrect");

            correctDisplay.GetComponent<Text>().text = "Incorrect PLS try again";
            next.SetActive(false);
            home.SetActive(true);
           correct.SetActive(false);
           incorrect.SetActive(true);
            Win.SetActive(false);
        }

        panelResult.SetActive(true);
        
    }
    
    public void Next()
    {
        panelResult.SetActive(false);
        numberQuestion++;
        GenerateQuestion();
    }
    
    void GenerateQuestion()
    {
        RandomNumberAnswer();
        questionText.text = controlQust.qustions[numberQuestion].elementQuestion.Q;
        for(int i=0;i<= answerText.Length; i++)
        {
            answerText[i].text = controlQust.qustions[numberQuestion].elementQuestion.Ans[randomAns[i]];
        }
    }
    void RandomNumberAnswer()
    {
        for(int i = 0; i < randomAns.Length; i++)
        {
            int a = randomAns[i];
            int b = Random.Range(0, randomAns.Length);
            randomAns[i] = randomAns[b];
            randomAns[b] = a;
        }
    }



}
