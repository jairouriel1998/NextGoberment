CREATE DATABASE NextGoberment_database;

USE NextGoberment_database;

CREATE TABLE Region(
  Id_region INT PRIMARY KEY,
  Departamento VARCHAR(30),
  Municipio VARCHAR(30)
);

CREATE TABLE Registro(
  Codigo INT PRIMARY KEY,
  Nombre VARCHAR(30),
  Identidad VARCHAR(30),
  Region INT,
  Voto_presidente INT,
  Voto_diputado INT,
  Voto_alcalde INT,
  FOREIGN KEY(Region) REFERENCES Region(Id_region)
);

CREATE TABLE Candidatos(
  Id_candidato INT PRIMARY KEY,
  Nombre VARCHAR(30),
  Partido VARCHAR(30),
  Cargo VARCHAR(30)
);

CREATE TABLE Presidentes(
  Id_candidato INT PRIMARY KEY,
  Designado1 VARCHAR(30),
  Designado2 VARCHAR(30),
  Designado3 VARCHAR(30),
  Votos_obtenidos INT,
  FOREIGN KEY (Id_candidato) REFERENCES Candidatos(Id_candidato)
);

CREATE TABLE Diputados(
  Id_candidato INT PRIMARY KEY,
  Suplente VARCHAR(30),
  Codigo_depto INT,
  Casilla INT,
  Votos_obtenidos INT,
  FOREIGN KEY (Id_candidato) REFERENCES Candidatos(Id_candidato),
  FOREIGN KEY (Codigo_depto) REFERENCES Region(Id_region)
);

CREATE TABLE Alcaldes(
  Id_candidato INT PRIMARY KEY,
  Vice_alcalde VARCHAR(30),
  Region INT,
  Votos_obtenidos INT,
  FOREIGN KEY (Id_candidato) REFERENCES Candidatos(Id_candidato),
  FOREIGN KEY (Region) REFERENCES Region(Id_region)
);

CREATE TABLE Votos(
  Codigo INT,
  Id_candidato INT,
  PRIMARY KEY (Codigo, Id_candidato),
  FOREIGN KEY (Codigo) REFERENCES Registro(Codigo),
  FOREIGN KEY (Id_candidato) REFERENCES Candidatos(Id_candidato)
);

INSERT INTO Candidatos VALUES ("1","Juan Orlando Hernandez","Partido Nacional","Presidente");
INSERT INTO Candidatos VALUES ("2","Salvador Nasralla","Alianza Patriotica","Presidente");
INSERT INTO Candidatos VALUES ("3","Luis Zelaya Medrano","Partido Liberal","Presidente");

INSERT INTO Presidentes VALUES ("1","Maria Antonia Rivera Rosales","Olga Margarita Alvarado Rodriguez","Ricardo Antonio Alvarez Diaz","0");
INSERT INTO Presidentes VALUES ("2","Iris Xiomara Castro Sarmiento","Guillermo Enrique Valle Marichal","Belinda Maria Carias Martinez","0");
INSERT INTO Presidentes VALUES ("3","Jose Antonio Fernandez Flores","Yadira Esperanza Bendanal","Maria Alicia Villela Meza","0");
