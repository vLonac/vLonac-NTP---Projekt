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
    object Label1: TLabel
      Left = 8
      Top = 275
      Width = 98
      Height = 13
      Caption = 'Po'#269'etak rezervacije:'
    end
    object Label2: TLabel
      Left = 143
      Top = 275
      Width = 108
      Height = 13
      Caption = 'Zavr'#353'etak rezervacije:'
    end
    object newReservationButton: TButton
      Left = 304
      Top = 272
      Width = 113
      Height = 49
      Caption = 'Izradi rezervaciju'
      TabOrder = 0
      OnClick = newReservationButtonClick
    end
    object newReservationStart: TDatePicker
      Left = 8
      Top = 294
      Width = 129
      Height = 25
      Date = 44348
      DateFormat = 'dd/MM/yyyy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      TabOrder = 1
    end
    object newReservationEnd: TDatePicker
      Left = 143
      Top = 294
      Width = 129
      Height = 25
      Date = 44378
      DateFormat = 'dd/MM/yyyy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      TabOrder = 2
    end
    object showReservations: TButton
      Left = 423
      Top = 272
      Width = 125
      Height = 49
      Caption = 'Pregledaj rezervacije'
      TabOrder = 3
      OnClick = showReservationsClick
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
  end
  object XMLDocument2: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\vehicles.xml'
    Left = 664
    Top = 199
  end
  object XMLDocument1: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\data.xml'
    Left = 576
    Top = 199
  end
end
