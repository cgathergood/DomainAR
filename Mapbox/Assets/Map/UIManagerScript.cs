using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class UIManagerScript : MonoBehaviour {

	void onStart() {

	}

	public void StartMap() 
	{
		SceneManager.LoadScene("MapDemo");
	}

	public void StartMenu() 
	{
		SceneManager.LoadScene("MainMenu");
	}

	public void StartHouse()
	{
		SceneManager.LoadScene ("HouseDemo");
	}

	public void Exit() 
	{
		Application.Quit ();
	}
}
