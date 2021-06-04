object adminHomeWindow: TadminHomeWindow
  Left = 0
  Top = 0
  Caption = 'adminHomeWindow'
  ClientHeight = 328
  ClientWidth = 741
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    741
    328)
  PixelsPerInch = 96
  TextHeight = 13
  object listCars: TListView
    Left = 8
    Top = 8
    Width = 725
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
    ExplicitWidth = 709
  end
  object newVehicleButton: TButton
    Left = 308
    Top = 281
    Width = 105
    Height = 33
    Caption = 'Dodaj novo vozilo'
    TabOrder = 1
    OnClick = newVehicleButtonClick
  end
  object loadVehiclesButton: TButton
    Left = 8
    Top = 281
    Width = 105
    Height = 33
    Caption = 'U'#269'itaj vozila'
    TabOrder = 2
    OnClick = loadVehiclesButtonClick
  end
  object deleteVehicleButton: TButton
    Left = 144
    Top = 281
    Width = 129
    Height = 33
    Caption = 'Obri'#353'i odabrano vozilo'
    TabOrder = 3
    OnClick = deleteVehicleButtonClick
  end
  object XMLDocument2: TXMLDocument
    FileName = 
      'D:\Projekti C++ Builder\Radi\vLonac-NTP---Projekt-ini_i_tabRedos' +
      'lijed\vehicles.xml'
    Left = 672
    Top = 275
  end
end
