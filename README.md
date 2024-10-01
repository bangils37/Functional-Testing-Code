# Functional-Testing-Code
BÁO CÁO BÀI TẬP - KIỂM THỬ VÀ ĐẢM BẢO CHẤT LƯỢNG PHẦN MỀM: KIỂM THỬ CHỨC NĂNG

Họ tên: Nguyễn Bằng Anh  
Mã sinh viên: 22021101  
Lớp môn học: INT3117 7  

# Bài toán
-	Ta xét hàm phân loại trái cây (cụ thể ở đây là quả cam) được dự trữ trong kho.  
-	Kho này có thời gian lưu trữ tối đa 30 ngày  
-	Kho này lưu trữ những quả cam có đường kính nhỏ hơn 12 cm  
-	Input:  
    +	Thời gian lưu kho: A | A thuộc Z, đơn vị ngày, miền hợp lệ 0<=A<=30  
    +	Đường kính quả cam (tiết diện ngang): B | B thuộc R, đơn vị cm, miền hợp lệ 0<B<12  
-	Output:  
    +	Good | 0<=A<=5 && 10<=B<12  
    +	Normal | 5<A<=10 && 8<=B<10  
    +	Bad | 10<A<=30 && 0<B<8  
    +	Invalid Input | Với các giá trị A và B còn lại  
