SELECT id_cc, nombre, apellido, TBL_Hora_Extra.cantidad FROM TBL_Empleado LEFT JOIN TBL_Hora_Extra ON TBL_Empleado.id_cc=TBL_Hora_Extra.id_cc_fk;
