object Form1: TForm1
  Left = 49
  Top = 0
  Caption = 'Rent-a-car helper'
  ClientHeight = 407
  ClientWidth = 377
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 386
    Width = 363
    Height = 13
    Caption = 
      'Izradili: Vanja Lon'#269'ari'#263' i Renato Mace'#353'an @ Tehni'#269'ko Veleu'#269'ili'#353't' +
      'e u Zagrebu '
  end
  object GroupBox1: TGroupBox
    Left = 56
    Top = 8
    Width = 273
    Height = 345
    Caption = '-'
    TabOrder = 0
    object Label2: TLabel
      Left = 96
      Top = 48
      Width = 70
      Height = 13
      Caption = 'Korisni'#269'ko ime:'
    end
    object Label3: TLabel
      Left = 112
      Top = 128
      Width = 39
      Height = 13
      Caption = 'Lozinka:'
    end
    object Label4: TLabel
      Left = 96
      Top = 264
      Width = 67
      Height = 13
      AutoSize = False
      Caption = 'Nema'#353' ra'#269'un?'
    end
    object username: TEdit
      Left = 72
      Top = 80
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Button1: TButton
      Left = 96
      Top = 216
      Width = 75
      Height = 25
      Caption = 'Prijava'
      TabOrder = 1
      OnClick = Button1Click
    end
    object password: TEdit
      Left = 72
      Top = 160
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object Button2: TButton
      Left = 96
      Top = 291
      Width = 75
      Height = 25
      Caption = 'Novi korisnik'
      TabOrder = 3
      OnClick = Button2Click
    end
  end
end
