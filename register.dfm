object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Registracija'
  ClientHeight = 423
  ClientWidth = 485
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 72
    Top = 17
    Width = 345
    Height = 384
    Caption = '-'
    TabOrder = 0
    object Label2: TLabel
      Left = 16
      Top = 195
      Width = 70
      Height = 13
      Caption = 'Korisni'#269'ko ime:'
    end
    object Label3: TLabel
      Left = 47
      Top = 235
      Width = 39
      Height = 13
      Caption = 'Lozinka:'
    end
    object Label1: TLabel
      Left = 58
      Top = 274
      Width = 28
      Height = 13
      Caption = 'Email:'
    end
    object Label4: TLabel
      Left = 45
      Top = 91
      Width = 41
      Height = 13
      Caption = 'Prezime:'
    end
    object Label5: TLabel
      Left = 64
      Top = 51
      Width = 22
      Height = 13
      Caption = 'Ime:'
    end
    object Label7: TLabel
      Left = 16
      Top = 147
      Width = 75
      Height = 13
      Caption = 'Datum ro'#273'enja:'
    end
    object newUsername: TEdit
      Left = 112
      Top = 192
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Button1: TButton
      Left = 144
      Top = 336
      Width = 75
      Height = 25
      Caption = 'Registriraj me'
      TabOrder = 1
      OnClick = Button1Click
    end
    object newPassword: TEdit
      Left = 112
      Top = 232
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object newSurname: TEdit
      Left = 112
      Top = 88
      Width = 121
      Height = 21
      TabOrder = 3
    end
    object newName: TEdit
      Left = 112
      Top = 48
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object newBirthdate: TDateTimePicker
      Left = 112
      Top = 144
      Width = 121
      Height = 21
      Date = 36526.000000000000000000
      Time = 36526.000000000000000000
      DateMode = dmUpDown
      MaxDate = 38139.999988425920000000
      TabOrder = 5
    end
    object newEmail: TEdit
      Left = 112
      Top = 271
      Width = 121
      Height = 21
      TabOrder = 6
    end
  end
end
