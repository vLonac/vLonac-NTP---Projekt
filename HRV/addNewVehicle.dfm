object addVehicleWindow: TaddVehicleWindow
  Left = 0
  Top = 0
  Anchors = [akLeft, akTop, akRight, akBottom]
  Caption = 'addVehicleWindow'
  ClientHeight = 478
  ClientWidth = 275
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
    Left = 8
    Top = 8
    Width = 257
    Height = 464
    Caption = 'GroupBox1'
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 35
      Width = 56
      Height = 13
      Caption = 'Proizvo'#273'a'#263':'
    end
    object Label2: TLabel
      Left = 24
      Top = 83
      Width = 32
      Height = 13
      Caption = 'Model:'
    end
    object Label3: TLabel
      Left = 24
      Top = 131
      Width = 62
      Height = 13
      Caption = 'Vrsta goriva:'
    end
    object Label4: TLabel
      Left = 24
      Top = 179
      Width = 52
      Height = 13
      Caption = 'Broj vrata:'
    end
    object Label5: TLabel
      Left = 24
      Top = 227
      Width = 75
      Height = 13
      Caption = 'Vrsta mjenja'#269'a:'
    end
    object Label6: TLabel
      Left = 24
      Top = 278
      Width = 68
      Height = 13
      Caption = 'Vrsta pogona:'
    end
    object Label7: TLabel
      Left = 24
      Top = 320
      Width = 84
      Height = 13
      Caption = 'Dodatna oprema:'
    end
    object noviManufacturer: TEdit
      Left = 120
      Top = 32
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object noviModel: TEdit
      Left = 120
      Top = 80
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object checkAC: TCheckBox
      Left = 24
      Top = 352
      Width = 97
      Height = 17
      Caption = 'Klima'
      TabOrder = 6
    end
    object checkBluetooth: TCheckBox
      Left = 144
      Top = 352
      Width = 97
      Height = 17
      Caption = 'Bluetooth'
      TabOrder = 7
    end
    object checkENC: TCheckBox
      Left = 24
      Top = 375
      Width = 97
      Height = 17
      Caption = 'ENC'
      TabOrder = 8
    end
    object checkCruiseControl: TCheckBox
      Left = 144
      Top = 375
      Width = 97
      Height = 17
      Caption = 'Tempomat'
      TabOrder = 9
    end
    object Button1: TButton
      Left = 88
      Top = 417
      Width = 75
      Height = 25
      Caption = 'Dodaj'
      TabOrder = 10
      OnClick = Button1Click
    end
    object noviFuel: TComboBox
      Left = 120
      Top = 128
      Width = 121
      Height = 21
      ItemIndex = 0
      TabOrder = 2
      Text = 'Dizel'
      Items.Strings = (
        'Dizel'
        'Benzin'
        'Elektri'#269'na energija')
    end
    object noviDoors: TComboBox
      Left = 120
      Top = 176
      Width = 121
      Height = 21
      ItemIndex = 0
      TabOrder = 3
      Text = '3'
      Items.Strings = (
        '3'
        '5'
        '7')
    end
    object noviShift: TComboBox
      Left = 120
      Top = 224
      Width = 121
      Height = 21
      ItemIndex = 0
      TabOrder = 4
      Text = 'Mehani'#269'ki'
      Items.Strings = (
        'Mehani'#269'ki'
        'Automatski')
    end
    object noviDrive: TComboBox
      Left = 120
      Top = 275
      Width = 121
      Height = 21
      ItemIndex = 0
      TabOrder = 5
      Text = 'Prednji'
      Items.Strings = (
        'Prednji'
        'Zadnji'
        'Sva 4')
    end
  end
  object XMLDocument2: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\vehicles.xml'
    Left = 224
    Top = 424
  end
  object UDPClient: TIdUDPClient
    BroadcastEnabled = True
    Port = 15555
    Left = 31
    Top = 424
  end
end
