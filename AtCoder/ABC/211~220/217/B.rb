cnt = {'ABC' => 0, 'ARC' => 0, 'AGC' => 0, 'AHC' => 0}
3.times do
  s = gets.chomp
  cnt[s] += 1
end
cnt.each do |k, v|
  if v == 0
    puts(k)
  end
end
