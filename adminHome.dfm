object adminHomeWindow: TadminHomeWindow
  Left = 0
  Top = 0
  Caption = 'adminHomeWindow'
  ClientHeight = 463
  ClientWidth = 778
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox2: TGroupBox
    Left = 8
    Top = 360
    Width = 762
    Height = 89
    Caption = 'Administracija:'
    TabOrder = 0
    object showDatabase: TButton
      Left = 16
      Top = 40
      Width = 105
      Height = 25
      Caption = 'Baze podataka'
      TabOrder = 0
      OnClick = showDatabaseClick
    end
    object Button1: TButton
      Left = 144
      Top = 39
      Width = 105
      Height = 25
      Caption = 'HTTP Klijent'
      TabOrder = 1
      OnClick = Button1Click
    end
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 761
    Height = 338
    Caption = 'Vozila:'
    TabOrder = 1
    DesignSize = (
      761
      338)
    object listCars: TListView
      Left = 16
      Top = 26
      Width = 729
      Height = 249
      Anchors = [akLeft, akTop, akRight]
      Columns = <
        item
          Caption = 'Manufacturer'
          Width = 100
        end
        item
          Caption = 'Model'
          Width = 90
        end
        item
          Caption = 'Fuel'
          Width = 115
        end
        item
          Caption = 'Doors'
          Width = 40
        end
        item
          Caption = 'Shift'
          Width = 70
        end
        item
          Caption = 'Drive'
        end
        item
          Caption = 'AC'
        end
        item
          Caption = 'Bluetooth'
          Width = 70
        end
        item
          Caption = 'ENC'
        end
        item
          Caption = 'Cruise Control'
          Width = 80
        end>
      TabOrder = 0
      ViewStyle = vsReport
    end
    object loadVehiclesButton: TButton
      Left = 16
      Top = 289
      Width = 105
      Height = 33
      Caption = 'U'#269'itaj vozila'
      TabOrder = 1
      OnClick = loadVehiclesButtonClick
    end
    object newVehicleButton: TButton
      Left = 188
      Top = 289
      Width = 105
      Height = 33
      Caption = 'Dodaj novo vozilo'
      TabOrder = 2
      OnClick = newVehicleButtonClick
    end
    object deleteVehicleButton: TButton
      Left = 360
      Top = 289
      Width = 129
      Height = 33
      Caption = 'Obri'#353'i odabrano vozilo'
      TabOrder = 3
      OnClick = deleteVehicleButtonClick
    end
  end
  object XMLDocument2: TXMLDocument
    FileName = 
      'D:\Projekti C++ Builder\vLonac-NTP---Projekt-custom-format\vehic' +
      'les.xml'
    Left = 584
    Top = 283
  end
end
