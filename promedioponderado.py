#Calcular el promedio pnderado de x notas

cantNotasString=input("Ingrese la cantida de evaluaciones: ")
cantNotas=int(cantNotasString)
notas=[]
ponderaciones=[]
suma=0
sumaPonderaciones=0

for i in range (0,cantNotas):
    notas.append(float(input("Ingrese la nota "+str(i+1)+": ")))
    ponderaciones.append(float(input("Ingrese la ponderacion: ")))
    suma=suma+(notas[i]*ponderaciones[i])
    sumaPonderaciones=sumaPonderaciones+ponderaciones[i]
print("La nota final es: ")
print(suma/sumaPonderaciones)
