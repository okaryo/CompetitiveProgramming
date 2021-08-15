n = gets.to_i
q = gets.to_i
row_num = (0..(n-1)).to_a
col_num = (0..(n-1)).to_a
trans_flag = false
q.times do
  query = gets.split.map(&:to_i)
  t = query.first
  if t != 3
    a = query[1]-1
    b = query[2]-1
  end
  if t == 1
    row_num[a],row_num[b] = row_num[b],row_num[a]
  elsif t == 2
    col_num[a],col_num[b] = col_num[b],col_num[a]
  elsif t == 3
    row_num,col_num = col_num,row_num
    trans_flag = !trans_flag
  else
    if trans_flag
      puts(col_num[b]*n + row_num[a])
    else
      puts(row_num[a]*n + col_num[b])
    end
  end
end
