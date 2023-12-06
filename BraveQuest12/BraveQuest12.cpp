// BraveQuest12.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include"Battle.h"
#include"Brave.h"
#include"Zombie.h"
using namespace std;
char* nameGet()
{
	cout << "名前を入力して下さい。" << endl;
	char* name;
	name = new char[50];
	cin >> name;
	return name;
}
int main()
{
	srand((unsigned int)time(NULL));
	Brave brave(nameGet());
	Zombie* pzombie;
	pzombie = new Zombie;
	
	Battle battle;
	battle.battleStart(brave, pzombie);

	delete pzombie;
	
}
//次にやることリスト
//battle関数を複数モンスターに対応するようにする
//複数のモンスターの生成関数
//名前やステータス設定を細かく
//勝敗判定の変更
//可読性を上げる


//そのうちやりたいことリスト
//レベル概念
//経験値
//アイテム
//ある程度のストリー
//テイム
//敗北時の教会
//もう少し見やすくする

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
