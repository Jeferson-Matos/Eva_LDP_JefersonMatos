object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Registro de datos'
  ClientHeight = 444
  ClientWidth = 447
  Color = clActiveCaption
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Consolas'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object L_Titulo: TLabel
    Left = 73
    Top = 16
    Width = 306
    Height = 37
    Caption = 'Registro de datos'
    Color = clMoneyGreen
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object L_Civil: TLabel
    Left = 232
    Top = 256
    Width = 45
    Height = 19
    Caption = 'Civil'
  end
  object L_Nombre: TLabel
    Left = 19
    Top = 96
    Width = 63
    Height = 19
    Caption = 'Nombres'
  end
  object L_Apellido: TLabel
    Left = 19
    Top = 136
    Width = 81
    Height = 19
    Caption = 'Apellidos'
  end
  object L_Fecha: TLabel
    Left = 19
    Top = 184
    Width = 171
    Height = 19
    Caption = 'Fecha de nacimiento'
  end
  object L_Sexo: TLabel
    Left = 19
    Top = 256
    Width = 36
    Height = 19
    Caption = 'Sexo'
  end
  object L_Telf: TLabel
    Left = 43
    Top = 328
    Width = 72
    Height = 19
    Caption = 'Telefono'
  end
  object T_Nombre: TEdit
    Left = 128
    Top = 88
    Width = 311
    Height = 27
    Color = clMoneyGreen
    TabOrder = 0
  end
  object T_Apellido: TEdit
    Left = 128
    Top = 128
    Width = 311
    Height = 27
    Color = clMoneyGreen
    TabOrder = 1
  end
  object T_Civil: TComboBox
    Left = 294
    Top = 253
    Width = 145
    Height = 27
    Color = clMoneyGreen
    TabOrder = 2
    Text = 'Seleccione'
    Items.Strings = (
      'Casado/a'
      'Soltero/a')
  end
  object T_Sexo: TComboBox
    Left = 73
    Top = 253
    Width = 145
    Height = 27
    Color = clMoneyGreen
    TabOrder = 3
    Text = 'Seleccione'
    Items.Strings = (
      'Hombre'
      'Mujer')
  end
  object T_Telf: TEdit
    Left = 128
    Top = 325
    Width = 176
    Height = 27
    Color = clMoneyGreen
    TabOrder = 4
    Text = '(____)________'
  end
  object B_Form2: TButton
    Left = 56
    Top = 384
    Width = 325
    Height = 33
    Caption = 'Mostras datos en otro formulario'
    TabOrder = 5
    OnClick = B_Form2Click
  end
  object D_Mes: TComboBox
    Left = 287
    Top = 176
    Width = 73
    Height = 27
    Color = clMoneyGreen
    TabOrder = 6
    Text = 'Mes'
    Items.Strings = (
      'Enero'
      'Febrero'
      'Marzo'
      'Abril'
      'Junio'
      'Julio'
      'Agosto'
      'Septiembre'
      'Octubre'
      'Noviembre'
      'Diciembre')
  end
  object D_Axo: TComboBox
    Left = 366
    Top = 176
    Width = 73
    Height = 27
    Color = clMoneyGreen
    TabOrder = 7
    Text = 'A'#241'o'
    Items.Strings = (
      '1940'
      '1941'
      '1942'
      '1943'
      '1944'
      '1945'
      '1946'
      '1947'
      '1948'
      '1949'
      '1950'
      '1951'
      '1952'
      '1953'
      '1954'
      '1955'
      '1956'
      '1957'
      '1958'
      '1959'
      '1960'
      '1961'
      '1962'
      '1963'
      '1964'
      '1965'
      '1966'
      '1967'
      '1968'
      '1969'
      '1970'
      '1971'
      '1972'
      '1973'
      '1974'
      '1975'
      '1976'
      '1977'
      '1978'
      '1979'
      '1980'
      '1981'
      '1982'
      '1983'
      '1984'
      '1985'
      '1986'
      '1987'
      '1988'
      '1989'
      '1990'
      '1991'
      '1992'
      '1993'
      '1994'
      '1995'
      '1996'
      '1997'
      '1998'
      '1999'
      '2000'
      '2001'
      '2002'
      '2003'
      '2004'
      '2005'
      '2006'
      '2007'
      '2008'
      '2009'
      '2010'
      '2011'
      '2012'
      '2013'
      '2014'
      '2015'
      '2016'
      '2017'
      '2018'
      '2019'
      '2020'
      '2021')
  end
  object D_Dia: TComboBox
    Left = 208
    Top = 176
    Width = 73
    Height = 27
    Color = clMoneyGreen
    TabOrder = 8
    Text = 'Dia'
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6'
      '7'
      '8'
      '9'
      '10'
      '11'
      '12'
      '13'
      '14'
      '15'
      '16'
      '17'
      '18'
      '19'
      '20'
      '21'
      '22'
      '23'
      '24'
      '25'
      '26'
      '27'
      '28'
      '29'
      '30'
      '31')
  end
end
