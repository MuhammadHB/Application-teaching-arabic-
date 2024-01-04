using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controllQandA : MonoBehaviour
{
  [System.Serializable]

public class Question

{

[System.Serializable]

public class ElementQuetion

{

[TextArea]

public string Q;

public string[] Ans;

public int AnswerCorrect;

}

public ElementQuetion elementQuestion;

}

public List<Question> qustions;

}



