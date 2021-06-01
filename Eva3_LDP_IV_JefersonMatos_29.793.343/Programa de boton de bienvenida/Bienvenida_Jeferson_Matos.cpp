//Programa Boton de bienvenida, Hecho por Jeferson Matos 29.793.343

#include <windows.h> //Libreria necesaria para crear las ventanas
#define ID1 100 //Define las etiquitas para las acciones de los botones

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM); //Declaracion del procedimieto de la ventana

char NomClase[] = "Clase"; //Nombre de las clases
HWND ventana; //declaracion de la ventana          
HWND boton;	//declaracion del boton
MSG MensajeBienvenida;    
WNDCLASSEX tipo;      

//Estructura de la ventana
int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow){
    
    tipo.hInstance = hThisInstance;
    tipo.lpszClassName = NomClase;
    tipo.lpfnWndProc = WindowProcedure;
    tipo.style = CS_DBLCLKS;
    tipo.cbSize = sizeof (WNDCLASSEX);
    tipo.hIcon = LoadIcon (NULL, IDI_QUESTION);
    tipo.hIconSm = LoadIcon (NULL, IDI_INFORMATION);
    tipo.hCursor = LoadCursor (NULL, IDC_ARROW);
    tipo.lpszMenuName = NULL; 
    tipo.cbClsExtra = 0;
    tipo.cbWndExtra = 0;
    tipo.hbrBackground = (HBRUSH) COLOR_WINDOW+3; 

    if (!RegisterClassEx (&tipo)) return 0;
	//creacion de la estructura de la ventana del programa de bienvenida
    ventana = CreateWindowEx (0, NomClase, ("Programa de bienvenida"), WS_OVERLAPPEDWINDOW|WS_BORDER, 400, 70, 320, 160, HWND_DESKTOP, NULL, hThisInstance, NULL);
    ShowWindow (ventana, nCmdShow);
    ShowWindow(GetConsoleWindow(), SW_HIDE ); 

    while (GetMessage (&MensajeBienvenida, NULL, 0, 0)){
        TranslateMessage(&MensajeBienvenida);
        DispatchMessage(&MensajeBienvenida);
    }
    return MensajeBienvenida.wParam;
}


LRESULT CALLBACK WindowProcedure (HWND ventana, UINT MensajeBienvenida, WPARAM wParam, LPARAM lParam){
    switch (MensajeBienvenida) {
    	
        case WM_CLOSE: 
        DestroyWindow(ventana);
             break;
        case WM_DESTROY:
        PostQuitMessage(0);
            break;
            case WM_CREATE:
            //creacion de la estructura del boton de bienvenida
            boton = CreateWindowEx(0, "button", ("Boton de bienvenida"), WS_VISIBLE | WS_CHILD | 0x00000001, 55, 80, 200, 30, ventana, (HMENU)ID1, GetModuleHandle(NULL), 0);
			break;
			case WM_COMMAND:
			break;

        default:  
            return DefWindowProc (ventana, MensajeBienvenida, wParam, lParam);
    }
    
	if (LOWORD(wParam) == ID1){ //condicion para mostrar el mensaje
    	MessageBox(NULL, "Bienvenido al programa", "Bienvenido!", MB_OK | MB_DEFBUTTON2); //mensaje de bienvenida del programa
    }
    
return 0;
}


