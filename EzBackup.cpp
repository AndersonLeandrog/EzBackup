#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <conio2.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");
	system("title !EzBackup v1.0.0");

    inicio:
    clrscr();

    int escolha;
    cout << "\n Escolha uma opção:\n\n [1] Backup dos arquivos\n [2] Restaurar arquivos";
	cout << "\n\n Todos os documentos, musicas, fotos, videos e downloads\n serão copiados para a pasta 'EzBackup'.\n\n > ";
	cin >> escolha;

	clrscr();

	if(escolha == 1){
        system("title !EzBackup v1.0.0 -- Criando diretórios...");
        system("mkdir Ezbackup\\Documentos");
        system("mkdir Ezbackup\\Musicas");
        system("mkdir Ezbackup\\Videos");
        system("mkdir Ezbackup\\Fotos");
        system("mkdir Ezbackup\\Downloads");
        clrscr();

        system("title !EzBackup v1.0.0 -- Copiando documentos...");
        system("xcopy /E /I \"%userprofile%\\Documents\" Ezbackup\\Documentos");
        clrscr();

        system("title !EzBackup v1.0.0 -- Copiando musicas...");
        system("xcopy /E /I \"%userprofile%\\Music\" Ezbackup\\Musicas");
        clrscr();

        system("title !EzBackup v1.0.0 -- Copiando fotos...");
        system("xcopy /E /I \"%userprofile%\\Pictures\" Ezbackup\\Fotos");
        clrscr();

        system("title !EzBackup v1.0.0 -- Copiando videos...");
        system("xcopy /E /I \"%userprofile%\\Videos\" Ezbackup\\Videos");
        clrscr();

        system("title !EzBackup v1.0.0 -- Copiando downloads...");
        system("xcopy /E /I \"%userprofile%\\Downloads\" Ezbackup\\Downloads");
        clrscr();

        system("title !EzBackup v1.0.0 -- OK!");
        cout << "\n OK!" << endl;
        getch();

        exit(0);

	} else if(escolha == 2){
        system("title !EzBackup v1.0.0 -- Movendo...");
        system("xcopy /E /Y /I /Q Ezbackup\\Documentos\\*.* \"%userprofile%\\Documents\"");
        system("xcopy /E /Y /I /Q Ezbackup\\Musicas\\*.* \"%userprofile%\\Music\"");
        system("xcopy /E /Y /I /Q Ezbackup\\Fotos\\*.* \"%userprofile%\\Pictures\"");
        system("xcopy /E /Y /I /Q Ezbackup\\Videos\\*.* \"%userprofile%\\Videos\"");
        system("xcopy /E /Y /I /Q Ezbackup\\Downloads\\*.* \"%userprofile%\\Downloads\"");

        system("title !EzBackup v1.0.0 -- Removendo...");
        system("erase /F /S /Q Ezbackup");

        clrscr();

        system("title !EzBackup v1.0.0 -- OK!");
        cout << "\n OK!" << endl;
        getch();

        exit(0);

	}else {
        cout << "\n ERRO: " << escolha << " não é uma opção válida!";
        getch();
        goto inicio;
	}



}
