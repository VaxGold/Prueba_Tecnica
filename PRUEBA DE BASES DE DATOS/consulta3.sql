DELETE FROM Matricula
WHERE id_alumno = (
    SELECT id_alumno
    FROM Alumno
    WHERE dni = '33444555K'
);
DELETE FROM Alumno
WHERE dni = '33444555K';