object registerWindow: TregisterWindow
  Left = 0
  Top = 0
  Caption = 'Registracija'
  ClientHeight = 385
  ClientWidth = 356
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object registerGroup: TGroupBox
    Left = 0
    Top = 0
    Width = 356
    Height = 385
    Align = alClient
    Caption = '-'
    TabOrder = 0
    object newUsernameLabel: TLabel
      Left = 38
      Top = 207
      Width = 70
      Height = 13
      Caption = 'Korisni'#269'ko ime:'
    end
    object newPasswordLabel: TLabel
      Left = 69
      Top = 246
      Width = 39
      Height = 13
      Caption = 'Lozinka:'
    end
    object newEMailLabel: TLabel
      Left = 80
      Top = 289
      Width = 28
      Height = 13
      Caption = 'Email:'
    end
    object newSurnameLabel: TLabel
      Left = 67
      Top = 123
      Width = 41
      Height = 13
      Caption = 'Prezime:'
    end
    object newNameLabel: TLabel
      Left = 86
      Top = 83
      Width = 22
      Height = 13
      Caption = 'Ime:'
    end
    object newBirthdateLabel: TLabel
      Left = 33
      Top = 166
      Width = 75
      Height = 13
      Caption = 'Datum ro'#273'enja:'
    end
    object Label1: TLabel
      Left = 12
      Top = 39
      Width = 118
      Height = 13
      Caption = 'Dr'#382'ava (npr. HR, IT, ...)'
    end
    object newUsername: TEdit
      Left = 136
      Top = 205
      Width = 121
      Height = 21
      TabOrder = 3
    end
    object registerUser: TButton
      Left = 160
      Top = 344
      Width = 75
      Height = 25
      Caption = 'Registriraj me'
      TabOrder = 7
      OnClick = registerUserClick
    end
    object newPassword: TEdit
      Left = 136
      Top = 244
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object newSurname: TEdit
      Left = 136
      Top = 120
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object newName: TEdit
      Left = 136
      Top = 80
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object newBirthdate: TDateTimePicker
      Left = 136
      Top = 165
      Width = 121
      Height = 21
      Date = 36526
      Time = 36526
      DateMode = dmUpDown
      MaxDate = 38139.999988425900000000
      TabOrder = 2
    end
    object newEMail: TEdit
      Left = 136
      Top = 286
      Width = 121
      Height = 21
      TabOrder = 5
    end
    object TOSBox: TCheckBox
      Left = 112
      Top = 321
      Width = 169
      Height = 17
      Caption = 'Prihva'#263'am uvjete poslovanja'
      TabOrder = 6
    end
    object checkCountryAvailability: TButton
      Left = 191
      Top = 36
      Width = 106
      Height = 20
      Caption = 'Provjeri dostupnost'
      TabOrder = 8
      OnClick = checkCountryAvailabilityClick
    end
    object countryOfRegistration: TEdit
      Left = 136
      Top = 35
      Width = 49
      Height = 21
      TabOrder = 9
    end
  end
  object XMLDocument1: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\data.xml'
    Left = 288
    Top = 253
  end
end
