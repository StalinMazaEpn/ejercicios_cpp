# Instrucciones para el Primer Examen de la Materia de Programación Estructurada

## 1.FIGURAS  GEOMETRICAS

Escriba  un  programa  que  permita  calcular  el  perímetro y  el  área  de  las  siguientes  figuras  geométricas:  

•CuadradoP  =  4*l,  A  =  lˆ2.

•RectánguloP  =  2*b  +  2*a,  A  =  a*b.

•CírculoP  =  2*pi*radio,  A  =  pi*radioˆ2.

•TrianguloP  =  lado+lado+lado,  A  =  (base  *  altura)/2.

•ElipseP  =  2*pi*(raíz((radioMayorˆ2  +  radioMenoeˆ2)/  2)),A  =  radioMayor  *  radioMenor  *  pi

FUNCIONALIDAD

El  programa  presenta  un  menúal  usuario,  indicando  las  figuras  disponibles.

Según la  figura  seleccionada,  el  programa: 

•pide  que  el  usuario  ingrese  los  parámetrosnecesarios  para  realizar  los  cálculos.

•valida  que  los  datos  ingresados  sean  números  mayores  que  0

•si  los  datos  son  validos,  presenta  los  resultados.

•si  los  datos  no  son  validos,  da  un  mensaje  de  error

El  menú  debe  permitirle  al  usuario  escoger  varias  opciones  y  permitirle  salir  al  momento  que  el  crea  conveniente.

REQUISITOS  DE  IMPLEMENTACIÓN

Use  cualquier  tipo  de  bucle  para  realizar  el  menú.

## 2.ARCA  DE  NOE

Noé  ha  construidoun  arca  pequeña,  prácticamente  es  un  bote  con  capacidad  máxima  de  1000  kg.

Los  animales  llegan  en  cualquier  orden.  A  medida  que  van  llegando  los  animales,  Noé  los  pesa.

El  arca  se  cierra  cuando  el  peso  total  de  los  animales  admitidos  llega  al  límite  de  1000  kg,
con  una  tolerancia  del  5%.

Escriba  un  programa  que  permita  ingresar  los  pesos  de  los  animales,  e  informe  cuando  hay  que  cerrar  el  arca, 
además el  programa  le  debe  indicar  cuando  esta  en  la  mitad  de  su  capacidad  y  al  final  debe  decir  cuantos  
animales  entraron  en  el  arca.

FUNCIONALIDAD

Para  cada  animal  que  llega  al  arca:

•Valida  que  el  peso  sea  un  número  positivo;  si  no  es  un  númeropositivo,  lo  ignora.

•Informa  el  peso  total  acumulado  hasta  ese  momento

•Añade  el  peso  ingresado  al  peso  total  acumulado,  siempre  y  cuando  no  exceda  el  límite  permitido  
(más  la  tolerancia  del  5%);  de  lo  contrario,  el  programa  ignora  ese  dato.

El  ciclo  se  repite  mientras  el  peso  acumulado  sea  inferior  a  la  capacidad  del  arca.

Al  llegar  al  límite  de  peso,  el  programa  avisa  que  hay  que  cerrar  el  arca. 

Reporta  el  número  de  animales  ingresados,  y  su  peso  total.

No  existe  límite  en  cuanto  al  número  de  animales  ingresados.

Reporta  cuando  el  arca  esta  a  la  mitad  de  su  capacidad.

REQUISITOS  DE  IMPLEMENTACION

Use  cualquier  tipo  de  bucle  para  realizar  el  menú
