object Form2: TForm2
  Left = 308
  Top = 266
  BorderIcons = []
  BorderStyle = bsSingle
  BorderWidth = 1
  Caption = #35831#31245#20505'...'
  ClientHeight = 125
  ClientWidth = 361
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 313
    Height = 13
    AutoSize = False
  end
  object Gauge1: TGauge
    Left = 32
    Top = 56
    Width = 297
    Height = 25
    Progress = 0
  end
  object Timer1: TTimer
    Interval = 200
    OnTimer = Timer1Timer
    Left = 8
    Top = 72
  end
end
