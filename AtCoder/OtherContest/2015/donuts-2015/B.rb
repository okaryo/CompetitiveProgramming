n,m = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
b = []
c = []
i = []
m.times do
  bci = gets.split.map(&:to_i)
  b << bci[0]
  c << bci[1]
  i << bci[2, bci[1]]
end

ans = 0
[0, 1].repeated_permutation(n) do |bits|
  cnt = bits.count{|x| x == 1}
  next unless cnt == 9

  t_sum = 0
  bits.each_with_index do |bit, index|
    next unless bit == 1
    t_sum += a[index]
  end

  m.times do |mi|
    t_cnt = 0
    c[mi].times do |ci|
      t_cnt += 1 if bits[i[mi][ci] - 1] == 1
    end
    t_sum += b[mi] if t_cnt >= 3
  end

  ans = [ans, t_sum].max
end

puts ans
