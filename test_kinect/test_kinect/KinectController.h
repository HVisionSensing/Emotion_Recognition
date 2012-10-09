#pragma once

#include "FrameWindow.h"
#include "KinectAccess.h"
/** Contr�leur : va combiner l'UI (FrameWindow) et la r�cup�ration d'image (KinectAccess) **/

class KinectController
{
private:
	KinectAccess* model;
	FrameWindow* window;

public:
	KinectController(DWORD f);
	KinectController(KinectAccess* m, FrameWindow* w);
	~KinectController(void);

		/** Getters & setters **/

	HWND getWdwHandle() {return window->getHandle();}
	HWND setWdwHandle(HWND wh) {window->setHandle(wh);}
};

