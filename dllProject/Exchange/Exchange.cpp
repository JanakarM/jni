#include <jni.h>     
#include <iostream>  
#include "Exchange.h"
#using <System.Management.Automation.dll>
using namespace std;
using namespace System;
using namespace System::Management::Automation;
using namespace System::Management::Automation::Host;
using namespace System::Management::Automation::Remoting;
using namespace System::Management::Automation::Runspaces;
using namespace System::Collections;
using namespace System::Collections::ObjectModel;

JNIEXPORT jobject JNICALL Java_Exchange_getMailbox(JNIEnv *env, jobject jObj){
	PSCommand^ rmcommand = gcnew PSCommand();
	rmcommand->AddScript("$obj=@{};$obj.Add='a';$obj.Remove='b';");
	PowerShell^ pst = PowerShell::Create();
	pst->Commands = rmcommand;
	Collection <PSObject^>^ results = pst->Invoke();
	pst->Streams->ClearStreams(); 
	jclass jcls = env->FindClass("java/util/Collection");
	jObj = env->AllocObject(jcls);
	return jObj;
} 
int main(){
	return 0;
}