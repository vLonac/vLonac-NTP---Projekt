object vacationWindow: TvacationWindow
  Left = 0
  Top = 0
  Caption = 'Vacation days:'
  ClientHeight = 358
  ClientWidth = 525
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    525
    358)
  PixelsPerInch = 96
  TextHeight = 13
  object listVacations: TListView
    Left = 8
    Top = 101
    Width = 287
    Height = 117
    Anchors = []
    Columns = <
      item
        Caption = 'Name:'
        Width = 70
      end
      item
        Caption = 'Surname:'
        Width = 80
      end
      item
        Caption = 'Vacation days:'
        Width = 120
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object buttonLoad: TButton
    Left = 8
    Top = 8
    Width = 287
    Height = 25
    Caption = 'Load JSON'
    TabOrder = 1
    OnClick = buttonLoadClick
  end
  object GroupBox1: TGroupBox
    Left = 301
    Top = 8
    Width = 212
    Height = 210
    Caption = 'New vacation days:'
    TabOrder = 2
    object Label1: TLabel
      Left = 30
      Top = 27
      Width = 60
      Height = 13
      Caption = 'Employee name:'
    end
    object Label2: TLabel
      Left = 11
      Top = 62
      Width = 79
      Height = 13
      Caption = 'Employee surname:'
    end
    object Label3: TLabel
      Left = 40
      Top = 89
      Width = 50
      Height = 13
      Caption = 'Number of days:'
    end
    object editName: TEdit
      Left = 96
      Top = 24
      Width = 97
      Height = 21
      TabOrder = 0
    end
    object editSurname: TEdit
      Left = 96
      Top = 59
      Width = 97
      Height = 21
      TabOrder = 1
    end
    object editLenght: TEdit
      Left = 96
      Top = 86
      Width = 33
      Height = 21
      NumbersOnly = True
      TabOrder = 2
    end
    object buttonAdd: TButton
      Left = 24
      Top = 131
      Width = 161
      Height = 25
      Caption = 'Add vacation days to table'
      TabOrder = 3
      OnClick = buttonAddClick
    end
    object editCurrentButton: TButton
      Left = 24
      Top = 168
      Width = 161
      Height = 25
      Caption = 'Change selected'
      TabOrder = 4
      OnClick = editCurrentButtonClick
    end
  end
  object UpDown1: TUpDown
    Left = 431
    Top = 92
    Width = 17
    Height = 25
    Max = 61
    TabOrder = 3
  end
  object deleteButton: TButton
    Left = 8
    Top = 39
    Width = 287
    Height = 25
    Caption = 'Delete vacation days'
    TabOrder = 4
    OnClick = deleteButtonClick
  end
  object saveToJSON: TButton
    Left = 8
    Top = 70
    Width = 287
    Height = 25
    Caption = 'Save from table to JSON'
    TabOrder = 5
    OnClick = saveToJSONClick
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 224
    Width = 505
    Height = 129
    Caption = 'Thread usage:'
    TabOrder = 6
    object buttonNameLenght: TButton
      Left = 16
      Top = 24
      Width = 470
      Height = 25
      Caption = 'Average name length'
      TabOrder = 0
      OnClick = buttonNameLenghtClick
    end
    object buttonSurnameLenght: TButton
      Left = 16
      Top = 55
      Width = 470
      Height = 25
      Caption = 'Average surname length'
      TabOrder = 1
      OnClick = buttonSurnameLenghtClick
    end
    object buttonDaysLenght: TButton
      Left = 16
      Top = 86
      Width = 470
      Height = 25
      Caption = 'Average days from vacations'
      TabOrder = 2
      OnClick = buttonDaysLenghtClick
    end
  end
end
