
// CapNYS2.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//20200612 first commit

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル
#define Vertxt "CapNYS2 Version4.5 - 2019/12/25"
#define English false
//20200622 githubと久しぶりに接続できたようだ。
//グルグル回らないようだ
// CCapNYS2App:
// このクラスの実装については、CapNYS2.cpp を参照してください。
//

class CCapNYS2App : public CWinApp
{
public:
	CCapNYS2App();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CCapNYS2App theApp;
