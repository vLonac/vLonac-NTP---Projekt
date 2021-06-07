object homeWindow: ThomeWindow
  Left = 0
  Top = 0
  Caption = 'caption'
  ClientHeight = 339
  ClientWidth = 746
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  DesignSize = (
    746
    339)
  PixelsPerInch = 96
  TextHeight = 13
  object rentalGroup: TGroupBox
    Left = 0
    Top = 0
    Width = 746
    Height = 339
    Align = alClient
    TabOrder = 0
    ExplicitLeft = -8
    ExplicitTop = 8
    ExplicitWidth = 877
    object newReservationButton: TButton
      Left = 304
      Top = 272
      Width = 113
      Height = 49
      Caption = 'Izradi rezervaciju'
      TabOrder = 0
      OnClick = newReservationButtonClick
    end
  end
  object listCars: TListView
    Left = 8
    Top = 8
    Width = 730
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
    TabOrder = 1
    ViewStyle = vsReport
    ExplicitWidth = 862
  end
  object XMLDocument2: TXMLDocument
    FileName = 
      'D:\Projekti C++ Builder\Radi\vLonac-NTP---Projekt-ini_i_tabRedos' +
      'lijed\vehicles.xml'
    Left = 672
    Top = 275
  end
  object XMLDocument1: TXMLDocument
    FileName = 
      'D:\Projekti C++ Builder\Radi\vLonac-NTP---Projekt-ini_i_tabRedos' +
      'lijed\data.xml'
    Left = 584
    Top = 279
  end
end
