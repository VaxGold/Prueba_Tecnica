SELECT p.nombre, p.apellidos
FROM Profesor p
JOIN Departamento d ON p.id_departamento = d.id_departamento
WHERE p.sueldo > 30000
  AND d.presupuesto > 200000;
