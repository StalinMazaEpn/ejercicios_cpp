# Proyecto Final de Programación Estructurada

El  estudiante  deberá  entregar  un  programa,  el  mismo  que  constara  de  un  archivo  llamado rendimiento.cpp
y  un  documento proyectofinal.docx.

Estos  archivos  se  subirán  en  la  carpeta  de  Dropbox  de  cada  estudiante  dentro  de  una  carpeta  con  el  nombre  Proyecto  Final.

El programa  consiste  en  calcular  el  rendimiento  de  un  computador  basado  en  el  tiempo  que  le  demoraría  a  un  computador
encontrar  una  contraseña.

El  archivo  de  Word  debe  contener  un  articulo  técnico  con  el  formato  IEEE en  el  cual  se explicara  como se llevo a cabo
el proyecto y cuales  son  los  resultados  que  se obtuvo  al  final  del  mismo.

El  archivo rendimiento.cpp debe  contener  el  código  fuente  de  su  programa.

FUNCIONALIDAD:

El  objetivo  principal  del  programa  es  determinar  el  tiempo  que  le  llevaría  a  un  computador  descifrar  su  contraseña.

Para  realizar  esto  primero  debemos  calcular  el  rendimiento  del  computador,  hay  varias  formas  de  calcular  el  rendimiento
de  un  computador,  nosotros  vamos  a  usar  la  ultima  técnica  presentada  en  el  documento,  esta  consiste  en  el  numero  
de  instrucciones  que  realiza  el  computador  en  un  determinado  tiempo  así:

rendimiento = numero de instrucciones / tiempo

Por  mero  aprendizaje  llevaremos  a  cabo  un  algoritmo  que  en  teoría  estaría  en  la  capacidad  de  decirle  al  usuario  
cual  es  su  contraseña  o  al  menos  escribirla  en  un  archivo  de  texto,  para  lograr  este  cometido  necesitamos 
tener  varios  datos  previos  y  tener  claro  el  concepto  de  una  permutación,  como  una  breve  explicación  una  
permutación  consiste  en  las  diferentes  formas  de  ordenar  un  conjunto  especifico  de  elementos  sin  repetirlos,  

por  ejemplo:

elementos = {1,2,3}

Posibles formas de ordenar: 

{2,3,1},{3,2,1},{1,2,3},{3,1,2},{2,1,3},{1,3,2}

Por  medio  de  la  biblioteca  <time.h> calcularemos  el  número  de  instrucciones,  en  un  bloque  con  un  tiempo 
determinado  por  ejemplo  1min.

Realizaremos  la  ejecución de  nuestro  algoritmo  de  las  permutaciones,  el  cual  escribirálas  permutaciones  posibles  
en  un documento.txt, por  medio  de  un  contador  al  final  del  tiempo  predeterminado  sabremos  cuantas  instrucciones  
logro  ejecutar  teniendo  asíun  estimado  del  rendimiento  de  nuestro  computador,  
obviamente  inferirá el  hecho  de  que  estemos  usando  otros  programas  al  mismo  tiempo,  por  lo  cual  recomiendo  
tener  en  funcionamiento únicamente nuestro  programa  junto  al sistema  operativo y  nada  mas, 
por  casos  como  esto  no  siempre  va  a  estimar  el  mismo  tiempo  para  la  misma  contraseña,  
este  variara  por  unos  pocos  segundos.

Para  los  3  elementos  que  vimos  anteriormente  existen  6  formas  distintas  de  distribuir  los  elementos,  este  mismo  
principio  será  usado  para  las  contraseñas,  el  programa  recibirá  un  texto  y  va  a  ser  evaluado,  
la  evaluación  consiste  en  revisar  que  tipo  de  caracteres  tiene,  como  sabemos  existen  números,  
letras  minúsculas,  letras  mayúsculas  y  símbolos,  entonces  debemos  determinar  cuales  de  estos  caracteres  
aparecen  en  el  texto  ingresado  por  el  usuario,  además  debemos  calcular  la  longitud  del  texto,  estos  valores  deben  almacenarse  ya  
que  serán  usados  para  la  estimación  del  tiempo,  recordemos  que  el  objetivo  es  decirle  al  usuario  
cuanto  tiempo  tomaría  la  maquina  en  descifrar  su  contraseña,  como  se  ha  explicado  en  clase  y  se  
puede  observar  en  la  pagina  de  kasperskydepende  del  rendimiento  del  computador  el  tiempo,  los  factores  
principales  para  la  fortaleza  de  una  contraseña  son  la  longitud,  los  diferentes  tipos  de  caracteres  que  
contiene  y  que  no  sean  palabras  de  uso  común  como  el  nombre  de  su  perro,  por  lo  tanto  por  medio  de  
una  formula  matemática  estimaremos  el  tiempo  que  le  llevaría  a  la  maquina  lograr  este  cometido,  
la  formula  es:  

numero de instrucciones = (numero de caracteres) elevado a la longitud

Con  la  formula  anterior  calcularemos  el  numero  de  instrucciones  o  permutaciones  que  pueden  existir  segúnlos  datos  
obtenidos  del  texto  ingresado  por  el  usuario,  ahora  para  estimar  el  tiempo  usaremos:

tiempo = numero de isntrucciones / rendimiento

Finalmente  al  usuario  le  presentaremos  que  tipos  de  caracteres  tiene  su  contraseña,  cual  es  la  longitud  
y  el  tiempo  que  demoraríala  maquina  en  que  se  ejecuto  para  descifrarla,  ademásbasados  en  ese  mismo  tiempo  
le  diremos  que  tan  fuerte  es  su  contraseña,  de  la  siguiente  manera:

Tiempo                  Nivel 
<=  59min               Demasiado débiles
>=  60min  &  <=  24h   Débiles
>=24h  &  <=  30dias    Normales
>1mes&  <=  1  año      Rígida
>1  año  &  <=  10años  Fuerte
>  10  años             SúperFuerte

Nota:Se  debe  tomar  en  cuenta  la  magnitud  en  la  que  mide  el  tiempo  la  función“clock()”de  la  librería  <time.h>,  
ya  que  al  momento  de  presentar  al  usuario  los  datos  debemos  ponerlos  en  magnitudes  mas  sencillas  de  leer,  
por  ejemplo  si  el  resultado  es  t  =  25sno  hay  problema,  pero  si  t  =  23456  s  entonces  debemos  transformarlo 
a  minutos,  horas,  días,meses,  años,  dependiendo  de  que  tan  grande  sea  el  numero,  seria  incorrecto
mostrarle  al  usuario  t  =  31536000s en  vez  de  decirle  que  se  demoraría un  año.

REQUISITOS  DE  IMPLEMENTACION

Escribirfunciones  para  cada  una  de  las  acciones  dispuestas  en  el  texto  anterior.

Investigar  acerca  del  algoritmo  para  resoluciónde  permutaciones.

Implementar  el  algoritmo  para  resoluciónde  permutaciones  y  validar  que  funcione  correctamente.

Implementar  un  menúque  me  permitaevaluar  cuantas  contraseñas  necesite  y  me  permita  salir  cuando  yo  quiera.

Escribir  las  permutaciones  realizadas  en  un archivo.txt.El archivo.txt se  reiniciara  con  cada  contraseña  evaluada.

Recibir  como  únicoparámetrola  contraseña  del  usuario,  no  se  debe  permitir  ingresar  ningúnelemento  extra.

Investigar  la  forma  de  que  el  texto  que  escribe  el  usuario  en  pantalla  no  se  divise  por  motivos  de  
seguridad  con  la  contraseña.
